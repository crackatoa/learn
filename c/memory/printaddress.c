#include <stdio.h>

/*
 * operasi penambahan / penguragan dengan 1
 * operasi pada char sebesar 1 byte
 * operast pada int sebesar 4 byte
 * */

int main(){
	char test = 'A';
	printf("address variable test = %p\n", (void *)(&test));
	printf("next address variable test + 1 = %p\n", (void *)(&test + 1));
	printf("before address variable test -1 = %p\n", (void *)(&test - 1));

	int number = 1;
	printf("address variable number = %p\n", (void *)(&number));		
	printf("next address variable number + 1 = %p\n", (void *)(&number + 1));
	printf("before address variable number - 1 = %p\n", (void *)(&number - 1));
	return 0;
}
