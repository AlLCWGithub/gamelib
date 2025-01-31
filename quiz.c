#include <stdio.h>
#include <ctype.h>

int main(){
char questions[][200] = {"1. What month did skibidi toilet start?",
                         "2. What is sqrt(81)",
                         "3. Name the aura that's 1 in 500k in day!"};
char options[][100] = {"A: February", "B: March", "C: June", "D: September",
                       "A: 8", "B: 4", "C: 9", "D: 11",
                       "A: Luminosity", "B: Solar: Solstice", "C: Magnetic: Reverse Polarity", "D: Null"};
char answers[] = {'A', 'C', 'B'};
int numberofquestions = sizeof(questions) / sizeof(questions[0]);
char guess;
int score;
printf("Weird Game!\n");
for(int i = 0; i < numberofquestions; ++i){
printf("%s\n", questions[i]);
for(int j = (i * 4); j < (i * 4) + 4; ++j){
printf("%s\n", options[j]);
}
printf("Make a guess!\n");
scanf("%c", &guess);
scanf("%c");
guess = toupper(guess);
if(guess == answers[i]){
printf("Correct!\n");
++score;
}
else{
printf("Wrong!\n");
}
}
printf("Final Score: %d", score);
};
