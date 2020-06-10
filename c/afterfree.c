#include <stdio.h>
#include <stdlib.h>

void main()
{

int *var1 = (int*)malloc(sizeof(int)); 
*var1 = 1000;                   
int *var2 = (int*)malloc(sizeof(int)); 
*var2 = 2000;

printf("Addresses of var1\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var1, var1); 
printf("Addresses of var2\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var2, var2);

free(var1);

printf("AFTER DEALLOCATING var1 FROM THE HEAP\n");
printf("Addresses of var1\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var1, var1); 
printf("Addresses of var2\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var2, var2);

var1 = (int*) malloc(sizeof(int));
*var1 = 1500;

printf("NEW MEMORY ADDRESS ALLOCATED FOR var1\n");
printf("Addresses of var1\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var1, var1); 
printf("Addresses of var2\n");
printf("Pointer on stack: %p / Heap: %p\n\n", &var2, var2); 

}
