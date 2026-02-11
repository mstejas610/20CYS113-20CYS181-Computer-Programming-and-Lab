#include <stdio.h>
int main()
{
	// Declaring of variables
	double initial_reading;
	double final_reading;
 	double distance_travelled;
	double reward;


	// Input the values of intial and final readings of the odometer.
	printf("Enter the initial reading of the odometer.\n");
	scanf("%lf", &initial_reading);
	
	printf("Enter the final reading of the odometer.\n");
	scanf("%lf", &final_reading);
	
	// Calculation of the number of kilometers travlled.
	distance_travelled= (final_reading-initial_reading);
	printf("The distance travelled by the traveller is %lf \n", distance_travelled);
	// The reward given for travlleing is per kilometer. The reward given for each kilometer is 20 rupees.
	reward = (distance_travelled)*20;
	printf("The final Reward given to the tarveller is %lf \n", reward);
	
	return 0;
}	
