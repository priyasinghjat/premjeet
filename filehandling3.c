#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp=NULL;
    char str[50]="priya singh jat";
    int a=10;
    fp=fopen("c.text","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);

    }
    fprintf(fp,"%d %s",a,str);
    fclose(fp);
}