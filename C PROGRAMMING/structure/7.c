#include<stdio.h>

int main()
{
   typedef struct student{
   int roll;
   int age;
    }std;
   struct specialstudent{
   std rollandage;
   int year;
   }bhim;

   bhim.rollandage.roll=5;
   printf("Roll is : %d",bhim.rollandage.roll);
 return 0;
}