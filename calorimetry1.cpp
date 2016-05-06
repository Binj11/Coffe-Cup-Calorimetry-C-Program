#include <stdio.h>
#include <math.h>

int main (){
	double inputvoltage, inputamperage, minutes, seconds, inputjoules;
	double temp1, temp2, massH2O, deltaTemp, heatCofH2O, heatjoules;
	double efficiency;
	heatCofH2O = 4.183; /* 4.183 J/degCelcius */
	printf("Please enter the mass of H2O being heated (in mL):\n");
	scanf("%lf",&massH2O);
	printf("Please enter the intitial temperature of the mass (Celcius):\n");
	scanf("%lf",&temp1);
	printf("Please enter the second temperature measurment (Celcius):\n");
	scanf("%lf",&temp2);
	deltaTemp= temp2 - temp1;
	printf("The change in temperature is: %.3lf\n",deltaTemp);
	heatjoules = massH2O * heatCofH2O * deltaTemp;
	printf("The amount of joules dissipated in the mass is:%.2lf\n",heatjoules);
	printf("Please enter the input voltage:\n");
	scanf("%lf",&inputvoltage);
	printf("Please enter the input amperage:\n");
	scanf("%lf",&inputamperage);
	printf("Please enter the amount of time (in minutes)the input ran for:\n");
	scanf("%lf",&minutes);
	seconds= minutes * 60;
	printf("The amount of seconds the input power ran for was:%.0lf\n",seconds);
	inputjoules=inputvoltage*inputamperage*seconds;
	printf("The amount of energy input in joules is:%.2lf\n",inputjoules);	
	efficiency=heatjoules/inputjoules;
	printf("The efficiency of this run (where 1.00 is the break even point):%.2lf",efficiency);	
	return (0);	
}
