#include <stdio.h>

/*
 * pointer merupakan simple integer variable yang berisi memory address
 * yang menunjuk pada sebuah nilai*/


int main(){
	int a =1;
	int * pointer_to_a = &a;
	printf("nilai a = %d\n",a);
	printf("nilai a dari pointer = %d\n", *pointer_to_a);
	printf("nilai a disimpan pada address %p\n", (void *)&a);
}
