#include <stdio.h>
int main()
{
	// declaration of variables
	int time;
	double temperature;
	
	// Taking input time	
	printf("Please enter the time passed since the disfunction of the freezer in hours.\n");
	scanf("%d", &time);
	// The calculation of final temperature
	temperature = ((4*time*time)/(time+2))-20;
		printf(" \n The final value of temperature is %lf \n",temperature);
				return 0;
				
}

