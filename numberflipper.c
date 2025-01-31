#include <stdio.h>
#include <string.h>

int main(){
int number;
printf("Input a positive integer\n");
scanf("%d", &number);
printf("Flipped number: ");
for(int i = number; i > 0; i /= 10){
int digit = i % 10;
printf("%d", digit);
}
};
