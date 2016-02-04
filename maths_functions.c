#include <stdio.h>

int main()
{
	int x = 5;
	int y = 8;
	int max = 5;
	int min = 1;
	printf ("%i * %i = %i\n", x ,y, x+y);
	printf ("%i * %i = %i\n", x ,y, x-y);
	printf ("%i * %i = %i\n", x ,y, x*y);
	printf ("%i * %i = %i\n", x ,y, x/y);
	printf("That's all\n");
	
	printf("Enter a number\n");
	return 0;
	
	int first = 8;
	int second = 4;
	newfunc = first - second;
	return 0;
	
}

int lab4() {
    int a[5];
    int i;
    int min;
    int max;
    printf("Enter five values:");
    //Store 10 numbers in an array
    for (i = 0; i < 5; i++) {
    	scanf("%d", &a[i]);
    }
    //Assume that a[0] is minimum
    max = a[0];
    for (i = 0; i < 5; i++) {
	if (a[i] > max) {
	max = a[i];
    }
    }
    printf("Maximum of five numbers is %d", max);
    return 0;

   //Assume that a[0] is minimum
   min = a[0];
   for (i=0; i<5; i++){
   if (a[i] > min) {
   min = a[i];
   }
   }
   printf("\nMinimum of five numbers is %d", min);
    return 0;
  }

