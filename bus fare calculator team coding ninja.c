#include <stdio.h>
int main()
{
    int age,rate;
    float distance, baseFare, discount, finalFare;
    printf("========== BUS FARE CALCULATOR ==========\n\n");
    // Taking passenger details
    printf("Enter Passenger Age: ");
    scanf("%d", &age);
    printf("Enter Distance Travelled (KM): ");
    scanf("%f", &distance);
	if (distance <= 5)
    rate = 10;
    else if (distance <= 15)
    rate = 8;
    else if (distance <= 30)
    rate = 6;
    else
    rate = 5;
    baseFare = distance * rate;
    // Check for discount
    if (age < 12 || age >= 60)
    {
        discount = baseFare * 0.5;
    }
    else
    {
        discount = 0;
    }
    // Calculate final fare
    finalFare = baseFare - discount;
    // Display receipt
    printf("\n--------- BUS FARE RECEIPT ---------\n\n");
    printf("Passenger Age  : %d\n", age);
    printf("Distance       : %.2f KM\n", distance);
    printf("Base Fare      : Rs. %.2f\n", baseFare);
    if (discount > 0)
    {
        printf("Discount       : 50%%\n");
    }
    else
    {
        printf("Discount       : No Discount\n");
    }
    printf("Final Fare     : Rs. %.2f\n", finalFare);
    printf("\n------------------------------------\n");
    printf("Thank you for travelling!\n");
}