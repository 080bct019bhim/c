#include<stdio.h>
#include<string.h>
//feature
typedef struct student{
    int roll;
    int age;
    char name[10];
}std;
int main()
{
   std a,b;
   a.roll=5;
   a.age=10;
   strcpy(a.name,"bhim");
   b=a;  // point haina deep copy ho...........
   printf("%d\n\n%d\n\n%s",b.roll,b.age,b.name); 
   return 0;
}