#include<stdio.h>
//fwrite only for binary  .txt vitra open hunxa but vitra ko content binary ma hunxa mostly used for structure
int main()
{
    FILE *ptr=fopen("haha.txt","wb");
    char name[10]="Bhim";
    fwrite(name,sizeof(name),2,ptr);//2 means sizeof(name) ley 10 byte allocate garyo vaney 10 byte 2 time allocate hunxa i.e total ma 20 bytes .vanesi overall ma 20 byte ko data linxa if 20 bye comes out of the array then some garbage values will be allocated
    return 0;
}