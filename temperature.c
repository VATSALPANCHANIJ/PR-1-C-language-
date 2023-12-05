#include<stdio.h>
//Write a Program to convert temperature from degrees Celsius to Fahrenheit.
//C to °F is: ° F = ( °C × 9/5 ) + 32
main()
{
		
	int Celcius;
	float Fahrenheit;
	printf("Enter the Celcius : ");
	scanf("%d",&Celcius);		
	
	Fahrenheit =(Celcius*9/5)+32;
	printf("Fahrenheit = %0.2f", Fahrenheit);
}

