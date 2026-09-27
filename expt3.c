#include <stdio.h>
int main()
{
    float a,b,c,average;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a,&b,&c);
    
    //formula
    average = (a+b+c)/3;
    
    printf("The Average of three numbers:%2f\n", average);
    return 0;
}