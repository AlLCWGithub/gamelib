#include <stdio.h>
#include <string.h>

int main(){
char name[20];
printf("Please input your name to be flipped!\n");
scanf("%s", name);
int strlength = strlen(name);
for(int i = strlength; i >= 0; --i){
printf("%c", name[i]);
}
};
