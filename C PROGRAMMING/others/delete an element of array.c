#include<stdio.h>
int main()
{
    int a[10],p;

    printf("-----Enter 10 elements : -----\n");
    for(int i=0; i<10; i++)
    {
    printf("______________________   ");
    scanf("%d",&a[i]);
    }
    printf("\n\n");
    printf("____________________Your array element is:_______________________\n\n");
    for(int i=0; i<10; i++)
    {
    printf("\t\t%d\n",a[i]);
    
    }

    printf("Which element you want to delete. Give position: \n");
    scanf("%d", &p);
    if(p>10)
    {
        printf("Deletion not possible......\n");
        goto a;
    }

    for(int i=p-1; i<9; i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0; i<9; i++)
    {
        printf("\t%d\n",a[i]);
    }
    a: return 0;
}