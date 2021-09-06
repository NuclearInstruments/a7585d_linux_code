
# Code example to control A7585D module using embedded linux (Raspberry PI)

The A7585D/A7585DU are high voltage regulators specifically designed for SiPM bias. Each has a built in temperature compensation controller with programmable coefficient. The module can be digitally controlled by UART and I2C. Moreover, A7585DU is mounted on a PCB exposing pins to ease the management of the module and it integrates a USB to UART bridge and it could be powered from USB. Output voltage could be also controlled proportionally to an analog input.
A7585D/A7585DU can provide up to 10 mA and the output voltage could be regulated between 20V and 85V with a resolution of 1mV. 
The module is designed by [Nuclear Instruments SRL](https://www.nuckearinstruments.eu) and distributed by [CAEN SPA](https://www.caen.it) 

![Image of A7585D connected to the Raspberry PI](https://github.com/NuclearInstruments/a7585d_linux_code/blob/main/docs/a7585d_rpi.jpg)

In terminal linux embedded device (IE raspberry pi) enter:
```
g++ HV_manager.c main.c -o a7585
```
in order to compiler the program

execute the software:
```
./a7585
```
It will set the HV output to 53V and continue to readout voltage.


Rember to enable the I2C on the Raspberry PI processor

NOTE: check if i2c bus and address are correct.



Read A7585D documentation on [CAEN A7585D](https://www.caen.it/products/a7585/)