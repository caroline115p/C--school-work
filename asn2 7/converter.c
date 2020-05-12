#include <stdio.h>
	int main(){
	/*declare the character for 1,2,3,4,5 and make number to float*/
	char ch1, ch2;
	float number;
	/* this gives an idea that the program will be not terminate until the user hit the 5*/
	while (ch1 != '5'){ 
	printf("Enter the character for the type of conversion:");
	scanf("%c",&ch1);
	(void) getchar();

	/* use switch case to find the corresponding action for the conversion*/
	switch (ch1){
		/* character 1 will converge between Kilometer and Mile*/
		case '1':
			printf("Enter the character for the direction of the conversion:");
			scanf(" %c",&ch2);
			(void) getchar();
		/* if the character is K then it changes kilometer to mile*/
			if (ch2 == 'K')
			{	
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
			

			printf("%f km\n", number);
			printf("%f mile\n", (number * 0.621371);
			}
		/* if the character is M then it changes mile to kilometer*/
			else if (ch2 =='M')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();

			printf("%f mile\n", number);
			printf("%f km\n",(number * 1.60934));
			}
	
			
		
			break;

		/* character 2 will converge between Meter to feet*/
		case '2':
			printf("Enter the character for the direction of the conversion:");
			scanf(" %c",&ch2);
			(void) getchar();
		/* character M then it changes Meter to feet */
			if (ch2 == 'M')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
		
			printf("%f meter\n", number);
			printf("%f feet\n",(number * 3.28084));
			}
		/* character F then it changes Fee to meter*/
			else if (ch2 =='F')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
			
			printf("%f feet\n",number);
			printf("%f meter\n", (number * 0.3048));
			}
		 
			break;
		/* character 3 will converge between centimetre and inch*/
		case '3':
			printf("Enter the character for the direction of the conversion:");
			scanf(" %c",&ch2);
			(void) getchar();
		/* character C will changes centimetre to inch*/
			if (ch2 =='C')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
			
			printf("%f centimetere\n", number);
			printf("%f inch\n", (number * 0.393701));
			}
		/* character I will change inch to centimetre*/
			else if (ch2 =='I')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
		
			printf("%f inch\n", number);
			printf("%f centimetere\n", (number * 2.54));
			}
			break;
		/*character 4 will converge between celsius and fahrenheit*/
		case '4':
			printf("Enter the character for the direction of the conversion:");
			scanf(" %c",&ch2);
			(void) getchar();
		/* character C will converge from celcisus to Fahrenheit*/
			if (ch2 == 'C')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
	
			printf("%f celisus\n",number);
			printf("%f fahrenheit\n", (number * 9.0f/5.0f) + 32);
			}
		/* character F will converge from Fahreheit to Celsius*/
			else if (ch2 == 'F')
			{
			printf("Enter the number for the conversion:");
			scanf(" %f",&number);
			(void) getchar();
			
			printf("%f fahrenheit\n",number);
			printf("%f celsius\n",(number-32) * (5.0f/9.0f));
			}
			break;
		/* case 5 will quit the program*/
		case '5' :
			return 0; 
		/*this code will be detect the error */
		default:
			printf("\nInvalid value entered.");
			break;	
}
	} 
}		
