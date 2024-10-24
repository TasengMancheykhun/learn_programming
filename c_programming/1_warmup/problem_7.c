#include<stdio.h>
void main(){
int total_days,year,weeks,days;
total_days=375;
year = total_days/366;
int rem = total_days%365;
weeks = rem/7;
days = rem%7;
printf("%d Year %d weeks %d days",year,weeks,days);
}
