#include "HV_manager.c"

#define I2C_PATH 	"/dev/i2c-1"	//VERIFY IF I2C PATH IS CORRECT
#define I2C_ADD		0x70 			//VERIFY IF I2C ADDRESS IS CORRECT
int iic_rasp;
float set_v=0;

int main (){
	
	iic_rasp = open(I2C_PATH, O_RDWR);

	A7585_Set_Enable (iic_rasp, I2C_ADD, true);
	A7585_Set_V (iic_rasp, I2C_ADD, 53);
	A7585_Set_MaxV (iic_rasp, I2C_ADD, 56);
	A7585_Set_RampVs (iic_rasp, I2C_ADD, 15);
	
	printf("Ready!\n");
	while (true){
		set_v = A7585_GetVout(iic_rasp, I2C_ADD, set_v);
		printf("Voltage is: %.2f\n", set_v);
		usleep(500000);
	}
}
