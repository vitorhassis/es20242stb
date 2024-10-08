#include <stdio.h>


int main () {
	
float temp,sens,ur,urporc;

printf("digite a temperatura em celsius: ");
scanf("%f",&temp);
printf("digite a umidade relativa em porcentagem: ");
scanf("%f",&ur);

urporc = ur/100;

sens = 0.5*(temp+61+((temp-68)*1.2)+(ur*0.094));

printf("a sensacao termica, de acordo com os dados coletados, e de: %2.f C",sens);	

	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
