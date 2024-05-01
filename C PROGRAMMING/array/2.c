//chech palindrome using recursion
#include<stdio.h>
int pal(char[],int,int);
int main()
{
    char *name="bhim";
    int val=pal(name,0,4);
    if(val==1)
    printf("Palindrome");
    else
    printf("Not palindrome");
    return 0;
}
int pal(char n[],int start ,int end)
{
    if(start>=end)
    return 1;
    else
    {
        if(n[start]!=n[end])
        return 0;
        else
        {
            pal(n,start+1,end-1);
        }
    }
}