#include<stdio.h>

int main()
{
    FILE *ptr=fopen("haha.txt","rb");
    char name[100];
    fread(name,4,1,ptr); //file bata 4x1 = 4 byte ko data read
    printf("%s",name);
    return 0;
}
