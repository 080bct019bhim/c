#include<stdio.h>

void main()
{
   int a_size;
   printf("Enter the size of array:");
   scanf("%d",&a_size);
   int a[a_size];
   printf("Enter the number\n");
   for(int i=0; i<a_size; i++)
   {
   scanf("%d",&a[i]);
   }

   int k[a_size];

    for(int i=0; i>a_size; i--)
   { 
      k[i]=a[i];
   }
   for(int i=0; i>a_size; i--)
   {
      a[a_size-1-i]=k[i];
   }

}