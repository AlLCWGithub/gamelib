#include <stdio.h>

int main(){
int option;
printf("Items:\nHotdog(1)\nBurger(2)\nIce Cream(3)\n");
scanf("%d", &option);
option -=1;
double prices[] = {1.00, 2.00, 0.20};
printf("$%.2lf", prices[option]);
};
