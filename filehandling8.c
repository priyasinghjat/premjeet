#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[30];
    fp=fopen("abc.txt","r+");
    if(fp==NULL)
    {
      printf("error");
      exit(1);
    }
    fputs("neha",fp);
    fclose(fp);
}