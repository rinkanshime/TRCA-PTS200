# ТРКА ПТС-200 - русифицированнаая проошивка для паяльника на базе ESP32-S2 под жала T12/TS-100

# ТЕКУЩАЯ ВЕРСИЯ - 1.00


ТРКА = акроним для ТермоРектальный КриптоАнализатор, хорошо известное в России альтернативное название для паяльника.
 
## Изменения относительно ветки Eddy:

- Русские шрифты отдельным файлом, нет привязки к либе U8G2
- Русское меню (замена английского языка) 
- Переработка режима отображения "Big Numbers" - заданная температуа в верхнем левом углу, напряжение питания в верхнем правом углу, статус обозначен различными иконками
- Восстановлена работоспособность калибровки жала 
- Восстановлен режим управдения PID

## Introduction
1. PD3.0 and QC3 fast charge protocol

2. 20V 5A 100W maximum power
<!-- 内置IMU，用于休眠检测 -->
3. Built-in IMU for sleep detection
<!-- PD协议芯片使用CH224K -->
4. PD protocol chip uses CH224K
<!-- MOSFET支持30V 12A -->
5. MOSFET supports 30V 12A
<!-- MCU使用ESP32 S2 FH4 -->
6. MCU uses ESP32 S2 FH4
<!-- 电源输入使用功率加强的USB-C接口 -->
7. The power input uses a power-enhanced USB-C interface
<!-- 定制的4欧姆内阻的烙铁头 -->
8. Customized soldering tip with 4 ohm internal resistance. It can be powered by 20V with 100W.
<!-- 128x64 OLED screen -->
9. 128x64 OLED screen
<!-- 3个按键，中间的按键与GPIO0相连 -->
10. 3 buttons, the middle button is connected to GPIO0
<!-- MSC 模式的固件升级，闪存盘模式 -->
11. MSC firmware upgrade, flash disk mode
<!-- 带有便携式的尖端保护盖 -->
12. With a portable tip cap
