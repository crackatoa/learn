#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char * name;
	int age;
}person;

int main(){
	person * man = (person *) malloc(sizeof(person));
	printf("size malloc sebelum isi = %lu\n",sizeof(person));
	man->name = "ahai";
	man->age = 34;	
	printf("size malloc sesudah isi = %lu\n",sizeof(person));
	printf("name %s age %d\n",man->name,man->age);	
	free(man);
	printf("size malloc after free = %lu\n",sizeof(person));
	return(0);
}
