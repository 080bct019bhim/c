#include<stdio.h>
#include<stdlib.h>
//stdlib.h is necessary for malloc and calloc
//malloc syntax  int *ptr=(int *)malloc(100xsizeof(int));  for 100 blocks for int  initially all block contains garbage value
//calloc syntax  int *ptr=(int *)calloc(100,sizeof(int));   //initially all value is 0
//for char :         char *ptr=(char *)calloc(100,sizeof(char));

//for realloc (to change size): ptr=realloc(ptr,newsize);
int main()
{
    //using dma input n no and print it
    int n;
    printf("Enter how many no you want to print:\n");
    scanf("%d",&n);
    int *ptr=(int *)calloc(n,sizeof(int));
    int *p=ptr;
    printf("Enter the numbers:\n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }
    ptr=ptr-(n);
    printf("\nThe no are :\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }
    free(p);//free(ptr); garyo vanry bigriyo because aailey ptr ley 1st block haina balki nth block lai point garexa but in free we assign pointer with beginnig block
    return 0;
}