#include <stdio.h>
int main()
{
    int intArr[5];
    float floatArr[5];
    char charArr[5];
    int i;

    //Input integer array
    printf("Enter 5 integer elements:");
    for(i=0; i<5; i++)
    {
        scanf("%d", &intArr[i]);
    }

    //input float array
    printf("Enter 5 float elements:");
    for(i=0; i<5; i++)
    {
       scanf("%f", &floatArr[i]); 
    }

    //input character array
    printf("Enter 5 character element:");
    for(i=0; i<5; i++)
    {
      scanf("%c", &charArr[i]);   
    }

    //display integer array values and addresses
    printf("\nInteger Array:\n");
    for(i=0; i<5; i++)
    {
       printf("value= %d\tAddress=%p\n", intArr[i], (void*)&intArr[i]);
    }

    //display float array values and addresses
     printf("\nfloat Array:\n");
    for(i=0; i<5; i++)
    {
       printf("value= %.2f\tAddress=%p\n", floatArr[i], (void*)&floatArr[i]);
    }

    //display character array values and addresses
     printf("\nCharacter Array:\n");
    for(i=0; i<5; i++)
    {
       printf("value= %c\tAddress=%p\n", charArr[i], (void*)&charArr[i]);
    }
    return 0;
}