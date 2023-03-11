#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("enter how many studets");
    scanf("%d",&n);
    printf("enter their roll number\n");
    p=(int*) malloc (n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("their roll number is\n");
    for(i=0;i<n;i++)
    printf("%d\n",*(p+i));
    free(p);
}
