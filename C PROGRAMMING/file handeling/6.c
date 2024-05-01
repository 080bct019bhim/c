#include<stdio.h>

int main()
{
    FILE *ptr=fopen("n.txt","r");
    char data[50];
    fgets(data,30,ptr);// 30 ko thau ma 20 lekheko vaye file bata 20 ota character matra read. 
    printf("%s",data);
    return 0;
}