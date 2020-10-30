#include <stdio.h>
int main(){
int count = 1, score;
float sum_score = 0;
float avg_score;
repeat:
printf("Enter the score of player %d\n", count);
scanf("%d", &score);
sum_score += score;
count+= 1;
if(count<=10) goto repeat;
avg_score = sum_score /10;
printf("The average score is = %0.2f \n", avg_score);
return 0;
}

