#include <stdio.h>
//this program that approximates pi by computing the value of where n which is number is the smallest integer such that for an user entered small number.
int main(){
  double epsilon;
  long long number = 1;
  double result = 0.0;
  int integer = 1;

  printf("Enter the  value here:");
  scanf("%lf", &epsilon);

//this while loop will go on until the epsilon is smaller
  while (epsilon  <=  (4.0 / (2.0 * (number + 1) - 1))) {
    if (number % 2 == 0){
      integer = -1;
    }
    result =  result +  (integer * (4.0 / (2.0 * number - 1)));
    number ++;
    integer=1;
  }

  printf("Result is  %lf", result);

  return 0;
}
