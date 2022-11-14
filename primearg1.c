#include<stdio.h>
int prime();

int main()
{
    int c;
    c=prime();
}
int prime(void)
{

    int i,n,count=0;
    printf("enter number");
    scanf("%d",&n);
    

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
        if(count==0){
        printf("prime");
        break;}
        
    else
      {
        printf("not prime");
        break;
      }
    
        
    }
        
    
}