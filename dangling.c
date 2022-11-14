#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i;
    printf("enter number");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("error");
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    free(ptr);
printf("enter values");
for(i=0;i<n;i++)
{
    printf("%d\t",*(ptr+i));
}

}