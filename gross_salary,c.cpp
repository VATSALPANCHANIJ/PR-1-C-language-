#include<stdio.h>
// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
main()
{
	int Salary;
	printf("Enter Your Salary :");
	scanf("%d",&Salary);
	
	float HRA = (Salary*10)/100;
	printf("HRA = %0.2f \n", HRA);
	
	float DA = (Salary*5)/100;
	printf("DA = %0.2f \n", DA);
	
	float TA = (Salary*8)/100;
	printf("TA = %0.2f \n", TA);
	
	float grosssalary = Salary+HRA+DA+TA;
	printf("grosssalary = %0.2f \n",grosssalary);
}
