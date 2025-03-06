#include <stdio.h>
#include <stdlib.h>
#include "almath.h"

double calculate(double no1, double no2, char op);

int main(){
double no1, no2, ans;
char op;
printf("First number?\n");
if(scanf("%lf", &no1) != 1){
printf("Invalid number input!\n");
return 0;
}
printf("Operator? (+ - * /)\n");
scanf(" %c", &op);
switch(op){
case '+':
break;
case '-':
break;
case '*':
break;
case '/':
break;
default:
printf("Invalid operator!\n");
return 0;
}
printf("Second number?\n");
if(scanf("%lf", &no2) != 1){
printf("Invalid number input!\n");
return 0;
}

ans = calculate(no1, no2, op);
if(ans == (int)ans){
printf("The answer is %d.\n", (int)ans);
}
else{
printf("The answer is %.2lf.\n", ans);
}
return 0;
}

double calculate(double no1, double no2, char op){
double ans;
switch(op){
case '+':
ans = add(no1, no2);
break;
case '-':
ans = subtract(no1, no2);
break;
case '*':
ans = multiply(no1, no2);
break;
case '/':
ans = divide(no1, no2);
break;
default:
//This should not be possible
printf("This is impossible!\n");
exit(-1);
}
return ans;
}
