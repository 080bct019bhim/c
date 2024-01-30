#include<stdio.h>

int main()
{
    float a=3/2;            
    printf("%f \n",a); //1.000000

    float b=3.0/2;          
    printf("%f \n",b); //1.500000

    float c=3/2.0;         
    printf("%f \n",c); //1.500000

    float d=3.0/2.0;         
    printf("%f \n",d); //1.500000

    float e=(float) 3/2; //() more presidence than / . So paila 3 -> 3.0000000 ani 2 (int)-> 2.0000(float)
    printf("%f \n",e); //1.500000

    float f=(float)3/2;         
    printf("%f \n",f); //1.500000

    float g=3/(float)2;         
    printf("%f \n",g); //1.500000

    float h=(float)(3/2); // actually (flooat) is not function call but typecast so paila 3/2 operate       
    printf("%f \n",h); //1.000000

    int x=sizeof(int); 
    printf("%d\n",x);  //4

    int x1=sizeof(float);
    printf("%d\n",x1);  //4

    int x2=sizeof(char);
    printf("%d\n",x2);  //1

    int x3=sizeof(double);
    printf("%d\n",x3); //8

    int x4=sizeof(long);
    printf("%d\n",x4); //8

    int x5=sizeof(long double);
    printf("%d\n",x5); //16
    return 0;
}