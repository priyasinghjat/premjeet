#include<stdio.h>
int main()
{
int marks;
printf("enter marks:");
scanf("%d",&marks);
if(marks>75 && marks<100)
{
    printf("excellent");
}
else if(marks> 55 && marks<75)
{
    printf("good");
}
else if(marks >33 &&marks < 45)
{
    printf("pass");
}
else 
{
    printf("fail");
}



    return 0;
}