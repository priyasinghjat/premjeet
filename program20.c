#include<stdio.h>
int main()
{
int i,sum=0;
int arr[5];
printf("enter a number");
for(i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++){
    sum=sum+arr[i];
}
printf("%d",sum);


}