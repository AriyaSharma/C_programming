		
15. Write a program to calculate the area of a triangle by implementing the following four
types of user-defined functions:
                      15.1) No Arguments, No Return Value
                      15.2) Arguments, No Return Value
                      15.3) No Arguments, Returns a Value
                      15.4) Arguments, Returns a Value	



			#include <stdio.h>
			float base, height; // global variables used by no-argument functions
			


			// (a) No arguments, no return value
			void areaNoArgNoReturn() 
			{
			printf("\n[No Arguments, No Return Value]\n");
			printf("Enter base and height: ");
			scanf("%f %f", &base, &height);
			float area = 0.5 * base * height;
			printf("Area of triangle = %.2f\n", area);
			}



			// (b) Arguments, no return value
			void areaArgNoReturn(float b, float h) 
			{
			printf("\n[Arguments, No Return Value]\n");
			float area = 0.5 * b * h;
			printf("Area of triangle = %.2f\n", area);
			}




			// (c) No arguments, returns a value
			float areaNoArgReturn() 
			{
			return 0.5 * base * height; // uses global base and height
			}



			// (d) Arguments, returns a value
			float areaArgReturn(float b, float h) 
			{
			return 0.5 * b * h;
			}




			int main() 
			{
			float b, h, area;
			
			areaNoArgNoReturn();           // (a) No arguments, no return value
			
			printf("\nEnter base and height: ");
			scanf("%f %f", &b, &h);
			areaArgNoReturn(b, h);          // (b) Arguments, no return value
			
			area = areaNoArgReturn();        // (c) No arguments, returns a value (uses global base and height set earlier)
			printf("\n[No Arguments, Returns a Value]\n");
			printf("Area of triangle (using stored base and height) = %.2f\n", area);
			
			area = areaArgReturn(b, h);       // (d) Arguments, returns a value
			printf("\n[Arguments, Returns a Value]\n");
			printf("Area of triangle = %.2f\n", area);
			return 0;
			}