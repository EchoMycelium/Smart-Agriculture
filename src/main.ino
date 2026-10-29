// src/main.ino
// 功能：初步测试 ESP32 通过 RS485 读取土壤传感器
#include <ModbusMaster.h>

#define MAX485_DE_RE 4
ModbusMaster node;

void preTransmission() { digitalWrite(MAX485_DE_RE, HIGH); }
void postTransmission() { digitalWrite(MAX485_DE_RE, LOW); }

void setup() {
  Serial.begin(115200);
  pinMode(MAX485_DE_RE, OUTPUT);
  digitalWrite(MAX485_DE_RE, LOW);

  Serial2.begin(4800, SERIAL_8N1, 16, 17); // RX=16, TX=17
  node.begin(1, Serial2);
  node.preTransmission(preTransmission);
  node.postTransmission(postTransmission);
  Serial.println("Modbus 主站初始化完成...");
}

void loop() {
  uint8_t result = node.readHoldingRegisters(0x0000, 2);
  if (result == node.ku8MBSuccess) {
    float moisture = node.getResponseBuffer(0) / 10.0;
    float temp = node.getResponseBuffer(1) / 10.0;
    Serial.printf("湿度: %.1f%%, 温度: %.1f°C\n", moisture, temp);
  } else {
    Serial.println("读取失败，检查接线");
  }
  delay(2000);
}
