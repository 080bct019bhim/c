#include<stdio.h>

int main()
{
   struct student{
   int roll;
   int age;
   };
   struct specialstudent{
   struct student rollandage;
   int year;
   }bhim;

   bhim.rollandage.roll=5;
   printf("Roll is : %d",bhim.rollandage.roll);
 return 0;
}