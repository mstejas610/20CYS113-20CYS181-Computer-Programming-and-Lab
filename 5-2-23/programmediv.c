#include <stdio.h>
int main(){
	// declaring of variables
	int volume;
	double rate;
	double time;
	
	// Taking input of the quantity of the iv bag.
	printf("Enter the value of quantity of the iv bag in millilitres.\n");
		scanf("%d", & volume);
		  printf("Enter the time to be infused in minutes.\n");
		scanf("%lf", &time);
        printf("The volume to be infused is %d ml.\n ", volume );
	time= (time/60);
	printf("The time to be infused is %f hours.\n", time);	
	// Calculating the rate.
	rate = volume/time;
	printf("The final rate of infusion is %lf ml/hr.\n", rate)	;
	
	return 0;
}


