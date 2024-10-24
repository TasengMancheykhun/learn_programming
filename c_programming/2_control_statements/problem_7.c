#include<stdio.h>
void main(){
    int side1,side2,side3;
    printf("Enter marks of three side of triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);
    if(side1==side2 && side1 ==side3){
        printf("Triangle is Equilateral.");
    }
    else if (side1==side2 || side1 ==side3){
        printf("Triangle is isosceles.");
    }
    else if((side1*side1) ==(side2*side2+side3*side3) || (side2*side2) == (side1*side1+side3*side3) || (side3*side3) == (side1*side1+side2*side2)){
           printf("Triangle is Right angled triangle.");
     
    }
    else{
        printf("Triangle is scalene");
    }

}