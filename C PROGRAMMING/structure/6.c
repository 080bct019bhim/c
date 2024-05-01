#include<stdio.h>
//nesting of structure
int main()
{
// {
//       struct student{
//         int roll;
//         int age;
//         struct student year;
//     };            blunder

   struct student{
        int roll;
        int age;
    };
       struct specialstudent{
        struct student rollandage;
        int year;
    };


    // //it can be also written as
    //    typedef struct student{
    //     int roll;
    //     int age;
    // }std;

    //    struct specialstudent{
    //     std rollandage;
    //     int year;
    // };
   
    return 0;
}