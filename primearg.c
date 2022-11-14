#include<stdio.h>
int prime(int);

int main()
{
    prime(18);
}
int prime(int n)
{

    int i,count=0;
    

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