#include<stdio.h>
int main()
{
    int even=0,odd=0,i;
    int arry[10];
    printf("enter number");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arry[i]);

    }
    for(i=0;i<10;i++){
        if(arry[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("this is even %d\n",even);
    printf("this is odd %d",odd);
}