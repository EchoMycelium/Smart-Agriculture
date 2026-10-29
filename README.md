# 🌿 Smart-Agriculture | 赛博农场混合网络

> "Where silicon meets soil. 望冰冷的硅板上也能伸出青草。"

本项目是 [SylvanStack](https://github.com/SylvanStack) 实验室的第一个孵化项目。致力于打造一套低成本、高可靠性的野外农业物联网数据采集系统。

## 🛠️ 硬件架构 (Hardware)
*   **核心主控**：ESP32 (支持 Wi-Fi & Bluetooth)
*   **传感器**：工业级 RS485 土壤温湿度传感器 (抗干扰强，支持长距离)
*   **通信链路**：
    *   **短距离/大数据**：Wi-Fi (本地调试/视频流)
    *   **长距离/低功耗**：LoRa (野外节点数据回传)

## 💻 软件架构 (Software)
*   **底层固件**：C++ / Arduino IDE (负责传感器数据采集与 LoRa 封包)
*   **数据网关**：基于 ESP32 的 MQTT 协议转发
*   **前端可视化**：HTML5 Canvas / Vue (实时数据面板，波形图展示)

## 🚀 当前进度 (Progress)
- [x] 项目立项，确定技术栈
- [ ] 完成 RS485 土壤传感器数据读取
- [ ] 跑通 ESP32 之间的 LoRa 点对点通信
- [ ] 搭建 Web 端数据可视化面板
- [ ] 农学兄弟加入，进行真实植物（薄荷/小番茄）对照实验

## 👥 团队 (Team)
*   
* 
