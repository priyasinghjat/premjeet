#include<stdio.h> 
int main()
{

float a,b,c,d,e;
float percentage;
int total=500;
int sum=0;
printf("enter marks a");
scanf("%f",&a);
printf("enter marks b");
scanf("%f",&b);
printf("enter marks c");
scanf("%f",&c);
printf("enter marks d");
scanf("%f",&d);
printf("enter marks e");
scanf("%f",&e);
sum=(a+b+c+d+e);
percentage =(sum*100)/total;
printf("%f",percentage);
return 0;
}