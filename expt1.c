#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;
    char name[50];

    //INPUT SECTION
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter an float: ");
    scanf("%f", &b);

    printf("Enter an double: ");
    scanf("%lf", &c);

    printf("Enter an char: ");
    scanf(" %c", &ch);

    printf("Enter an String: ");
    scanf("%s", name);

    //OUTPUT SECTION
    printf("\n   Output  \n");
    printf("Integer is %d\n", a);
    printf("Float is %f\n", b);
    printf("Double is %lf\n", c);
    printf("Character is %c\n", ch);
    printf("String is %s\n", name);

    return 0;
}