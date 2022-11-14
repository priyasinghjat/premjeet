#include<stdio.h>
int main()
{
    int i,j;
    printf("Enter n : "); 
    //scanf("%d",&n);
    for(i=1;i<=3;i++)
    {
        for(j=3;j>=1;j--)
        {
            if(i>=j)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
     printf("Enter n : "); 
    //scanf("%d",&n);
    for(i=1;i<=3;i++)
    {
        for(j=4;j>=1;j--)
        {
            if(i>=j)
            printf("* ");
            else 
            printf(" ");
        }
        printf("\n");
    }    
    printf("thankyou kinshuk");
    return 0;
}