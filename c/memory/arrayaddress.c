/*
 * address pada array*/

#include <stdio.h>

int main(){
	int num [4] = {1,2,3,4000};

	printf("address variable num = %p\n", num);

	for(int i=0; i<4 ; i++){
		printf("address num[%d] = %p\n",i,num);
	}

	printf("besar array num pada memory = %lu\n",sizeof(num));
	return 0;
}
