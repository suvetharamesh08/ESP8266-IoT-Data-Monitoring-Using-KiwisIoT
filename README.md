# ESP8266-Based IoT Data Monitoring and Cloud Communication Using KiwisIoT Platform

## **1. PROJECT OVERVIEW**

This project demonstrates an IoT-based data monitoring system using the ESP8266 Wi-Fi module and the KiwisIoT platform. The ESP8266 establishes a wireless internet connection and continuously transmits numerical data to the cloud platform.

The system generates numerical values ranging from 1 to 100 and sends them to the KiwisIoT platform at regular intervals of three seconds. The transmitted values can be monitored through the IoT dashboard. Once the counter reaches 100, it automatically resets to 1 and continues the transmission process.

This project provides practical knowledge of wireless communication, cloud connectivity, IoT integration, and embedded system programming.

## **2. PROJECT OBJECTIVES**

The main objectives of this project are:

- To establish Wi-Fi connectivity using the ESP8266 microcontroller.
- To understand the fundamentals of Internet of Things (IoT).
- To integrate the ESP8266 with the KiwisIoT platform.
- To transmit numerical data to the IoT dashboard.

## **3. HARDWARE REQUIREMENTS**

The following hardware components are required for this project.

| Component | Description |
|---|---|
| ESP8266 NodeMCU | Main microcontroller used for Wi-Fi connectivity and data transmission. |
| USB Cable | Used for programming and powering the ESP8266. |
| Computer/Laptop | Used to write, upload, and monitor the Arduino program. |
| Wi-Fi Network | Provides internet connectivity for cloud communication. |

## **4. SOFTWARE REQUIREMENTS**

### **Arduino IDE**
Used to write, compile, and upload the embedded C++ program to the ESP8266 board.

### **ESP8266WiFi Library**
Provides Wi-Fi connectivity and allows the ESP8266 to connect to an available wireless network.

### **KiwisIoT Library**
Enables communication between the ESP8266 and the KiwisIoT platform for transmitting numerical data.

### **KiwisIoT Platform**
A cloud-based IoT platform used to receive and monitor the data transmitted by the ESP8266.

## **5. WORKING PRINCIPLE**

The project operates by establishing wireless communication between the ESP8266 and the KiwisIoT platform.

1. **Program Initialization:** The ESP8266 starts executing the uploaded program and initializes serial communication at 115200 baud rate.

2. **Wi-Fi Connection:** The ESP8266 uses the configured Wi-Fi SSID and password to establish an internet connection.

3. **KiwisIoT Initialization:** The KiwisIoT library initializes communication using the configured topic ID.

4. **Data Generation:** An integer variable generates numerical values starting from 1 and increases by one after every transmission.

5. **Data Transmission:** The generated values are transmitted to the KiwisIoT platform through data channel 0.

6. **Serial Monitoring:** The transmitted values are displayed in the Arduino Serial Monitor.

7. **Automatic Reset:** When the counter exceeds 100, it automatically resets to 1.

8. **Continuous Operation:** The entire process repeats continuously with a three-second delay between transmissions.

## **6. KIWISIOT PLATFORM INTEGRATION**

The KiwisIoT platform is integrated into this project to enable cloud-based data communication. It acts as the receiving platform for numerical values transmitted by the ESP8266 through a Wi-Fi connection.

The ESP8266 communicates with the platform using the KiwisIoT library and a configured topic ID. The generated numerical values are sent through the specified data channel, allowing the incoming data to be monitored through the platform dashboard.

### **KEY FEATURES**

- Wireless communication between ESP8266 and the cloud platform.
- Topic-based data transmission.
- Continuous numerical data updates.
- Cloud-based data monitoring.
- Integration of embedded hardware with an IoT platform.

## **7. DATA TRANSMISSION DETAILS**

The following table describes the important parameters used in this project.

| Parameter | Description |
|---|---|
| Microcontroller | ESP8266 NodeMCU |
| Programming Platform | Arduino IDE |
| Communication | Wi-Fi |
| IoT Platform | KiwisIoT |
| Data Type | Integer |
| Initial Value | 1 |
| Maximum Value | 100 |
| Transmission Interval | 3 Seconds |
| Data Channel | 0 |
| Baud Rate | 115200 |
## **SOURCE CODE**

[ESP8266_KiwisIoT.ino](ESP8266_KiwisIoT.ino)

## **8. SERIAL MONITOR OUTPUT**

The Arduino Serial Monitor is used to observe the initialization messages and transmitted numerical values.

### **SAMPLE OUTPUT**

```text
ESP8266 IoT Connection
KiwisIoT Initialized
Data sent to KiwisIoT: 1
Data sent to KiwisIoT: 2
Data sent to KiwisIoT: 3
Data sent to KiwisIoT: 4
Data sent to KiwisIoT: 5
```

The numerical values continue increasing from 1 to 100. After reaching 100, the counter automatically restarts from 1.

## **9. ADVANTAGES**

- Provides wireless data transmission using Wi-Fi connectivity.
- Enables communication between embedded devices and cloud platforms.
- Demonstrates continuous data monitoring.
- Requires minimal hardware components.
- Helps understand practical IoT implementation.
- Provides a foundation for developing advanced IoT applications.

## **10. APPLICATIONS**

The concepts demonstrated in this project can be extended
