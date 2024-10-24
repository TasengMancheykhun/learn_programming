#include<stdio.h>

void circle(int x, float *pa,float *pc){
 *pa=3.143 * (x*x);
 *pc=2*3.143*x;

}
void main(){
    int radii = 10;
    float area,circum;
circle(radii,&area,&circum);
 
printf("value of radii : %d\n",radii);

printf("value of Area : %f\n",area);
printf("value of Circumference : %f\n",circum);

}

