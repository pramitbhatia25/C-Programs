#include <stdio.h>
#include <math.h>


float distance_covered(float u, float t){
float distance = u*t + (0.5)*(9.8)*t*t;
return distance;
}

int main(){

float inspeed; float time;

printf("Enter initial speed: \n");
scanf("%f", &inspeed);
printf("Enter total time: \n");
scanf("%f", &time);

printf("Your distance covered is %.2f", distance_covered(inspeed, time));

return 0;
}
