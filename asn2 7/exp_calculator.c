#include <stdio.h>
float power(float base, int exponent);
int main()
{
	/*Program to calculate base and exponent's power*/
	float base;
	int exponent;
	/*input the exponent*/
	printf("What is the base number?:");
	scanf(" %f",&base);
	
	if (base < 0)
	{
	printf("Base is not a positive number");
	}
	printf("What is the exponent number?:");
	scanf(" %d",&exponent);
	/* caculate and display the result*/
	printf(" %f^%d =%f\n",base,exponent,power(base, exponent));
	return 0;
}
/* function returns the power of base and the exponenet*/
float power(float base, int exponent)
{
	if (exponent == 0){
		return 1;
}
	else if (exponent > 0)
{
	 return base*power(base,exponent-1);
}
	else 
	{
	return (1/(base*power(base, -exponent-1)));
}
}

