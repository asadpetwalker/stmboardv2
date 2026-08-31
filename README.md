# stmboardv2

# What it is and why I made it
Initially, this was a standard better stm dev board, but as I progressed with this project, I realized I didn't want to do the exact same thing I did last time, so I added sensors and wireless capabilities, a speaker and more interfacing options, for extra security layers. Additionally, I added an ESP32 to sideload tasks, to add another programming option, and to add a microSD card peripheral to store more memory on my board. I made it because the STM is an extremely powerful chip, and my last board didn't do it justice from the lack of capabilities and GPIO, as well as the lack of indication leds and in general less than apt design. Thus, I spent much more time integrating multiple sensors and features, adding indicator LEDs and in general making it much more powerful and useful than a just a simple dev board.

# Assembly Instructions
1. Solder

# Pictures
<img width="1284" height="859" alt="image" src="https://github.com/user-attachments/assets/0a2bf74f-355e-4025-951e-fd1927856532" />
<img width="888" height="827" alt="image" src="https://github.com/user-attachments/assets/c6c3e0e8-a9b8-43c6-8e94-c84176200074" />
<img width="702" height="576" alt="Screenshot from 2026-08-30 23-37-19" src="https://github.com/user-attachments/assets/55dd8472-8d81-49dd-98db-0a82943ce09d" />

# Bill of Materials

| LCSC#     | MPN                 | Manufacturer              | Package         | Description                                                                                             |   Quantity |   Total Price ($) | Product Link                                               |
|:----------|:--------------------|:--------------------------|:----------------|:--------------------------------------------------------------------------------------------------------|-----------:|------------------:|:-----------------------------------------------------------|
| C29936    | CL10B105KA8NNNC     | Samsung Electro-Mechanics | 0603            | 1uF ±10% 25V Ceramic Capacitor X7R 0603                                                                 |         20 |              0.43 | [Link](https://www.lcsc.com/product-detail/C29936.html)    |
| C1705     | CL10A475KP8NNNC     | Samsung Electro-Mechanics | 0603            | 4.7uF ±10% 10V Ceramic Capacitor X5R 0603                                                               |         50 |              1    | [Link](https://www.lcsc.com/product-detail/C1705.html)     |
| C13738    | X322516MLB4SI       | YXC Crystal Oscillators   | SMD3225-4P      | Crystal 16MHz ±10ppm 9pF SMD3225-4P                                                                     |          5 |              0.47 | [Link](https://www.lcsc.com/product-detail/C13738.html)    |
| C164170   | 472192001           | MOLEX                     | SMD             | Micro SD card (TF card) Connector and Ejector Hinged Lid Surface Mount                                  |          1 |              0.73 | [Link](https://www.lcsc.com/product-detail/C164170.html)   |
| C2933084  | FRC0402F2702TS      | FOJAN                     | 0402            | 27kΩ ±1% 62.5mW 0402 Thick Film Resistor                                                                |        100 |              0.19 | [Link](https://www.lcsc.com/product-detail/C2933084.html)  |
| C2909342  | FRC0402F2700TS      | FOJAN                     | 0402            | 270Ω ±1% 62.5mW 0402 Thick Film Resistor                                                                |        100 |              0.25 | [Link](https://www.lcsc.com/product-detail/C2909342.html)  |
| C1550542  | CP2102N-A02-GQFN20  | SILICON LABS              | QFN-20-EP(3x3)  | USB to UART 3Mbps QFN-20-EP(3x3) Controllers RoHS                                                       |          1 |              2.29 | [Link](https://www.lcsc.com/product-detail/C1550542.html)  |
| C5656610  | ICS-43434           | TDK InvenSense            | LGA-6(3.5x2.7)  | Omnidirectional -26dB 64dB LGA-6(3.5x2.7) Microphones RoHS                                              |          1 |              4.13 | [Link](https://www.lcsc.com/product-detail/C5656610.html)  |
| C94355    | STM32F411RET6       | ST                        | LQFP-64(10x10)  | ARM Cortex-M4 32 Bit 100MHz LQFP-64(10x10) Microcontrollers RoHS                                        |          1 |              6.87 | [Link](https://www.lcsc.com/product-detail/C94355.html)    |
| C2913198  | ESP32-S3-WROOM-1-N8 | ESPRESSIF                 | SMD,25.5x18mm   | 2.4GHz ESP32-S3 Chip On-board PCB Antenna -98.2dBm SMD,25.5x18mm RF Transceiver Modules and Modems RoHS |          1 |              4.91 | [Link](https://www.lcsc.com/product-detail/C2913198.html)  |
| C22365428 | AP2112K-1.8TRG1(MS) | MSKSEMI                   | SOT-23-5        | Linear Voltage Regulator IC Positive Fixed 1 Output 600mA SOT-23-5                                      |          5 |              0.48 | [Link](https://www.lcsc.com/product-detail/C22365428.html) |
| C726001   | ICM-20948           | TDK InvenSense            | QFN-24(3x3)     | QFN-24(3x3) IMUs (Inertial Measurement Units) RoHS                                                      |          1 |             18.96 | [Link](https://www.lcsc.com/product-detail/C726001.html)   |
| C22469962 | TXB0102DCT(LX)      | lingxingic                | TSSOP-8         | 45Mbps 1 2 TSSOP-8 Translators, Level Shifters                                                          |          5 |              1.25 | [Link](https://www.lcsc.com/product-detail/C22469962.html) |
| C910544   | MAX98357AETE+T      | MAXIM                     | TQFN-16-EP(3x3) | 2.4mA 2.5V~5.5V 3.2Wx1@4Ω Class D TQFN-16-EP(3x3) Audio Amplifiers RoHS                                 |          1 |              1.32 | [Link](https://www.lcsc.com/product-detail/C910544.html)   |
| C880859   | 0603N9R0C500CT      | Walsin                    | 0603            | 9pF 50V Ceramic Capacitor NP0 0603                                                                      |         50 |              0.45 | [Link](https://www.lcsc.com/product-detail/C880859.html)   |
| -         | Custom PCB          | JLCPCB                    | -               | Custom printed circuit board                                                                            |          5 |              8.34 | -                                                          |
| -         | Shipping            | -                         | -               | Shipping cost                                                                                           |          1 |             18    | -                                                          |

**Total Estimated Cost:** $70.07
