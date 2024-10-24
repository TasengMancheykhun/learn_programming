#include<stdio.h>
int main(){

  float area=0,radii=10.00;
  float *pr,*pa;

  printf("Enter th radius: \n");
  scanf("%f",&radii);

pr= &radii;
pa= &area;

*pa=3.14*(*pr * *pr);

printf("Area of circle with radii %f is : %f",radii,area);


return 0;
}

