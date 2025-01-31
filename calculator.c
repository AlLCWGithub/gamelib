#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
char operator;
double No1;
double No2;
double result;
printf("Operator? (+ - * /)\n");
scanf("%c", &operator);
printf("Number 1?\n");
scanf("%lf", &No1);
printf("Number 2?\n");
scanf("%lf", &No2);
switch(operator){
case '+':
result = No1 + No2;
printf("Answer: %lf", result);
break;
case '-':
result = No1 - No2;
printf("Answer: %lf", result);
break;
case '*':
result = No1 * No2;
printf("Answer: %lf", result);
break;
case '/':
result = No1 / No2;
printf("Answer: %lf", result);
break;
default:
printf("%c is invalid!", operator);
}
};
