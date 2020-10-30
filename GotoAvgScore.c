#include <stdio.h>
int main(){
int score, i = 0; int count = 0;

again:
	printf("\nEnter the score %d = ", i);
	scanf("%d", &score);
	if(score<0) goto again;	

	count += score/100;
	i++;

	if(i<10) goto again;

	printf("\ntoal centuries = %d", count);

return 0;
}
