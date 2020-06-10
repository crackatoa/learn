#include <stdio.h>

/* declare function foo */
int foo(int bar);

int main(){
	foo(1221);
}

int foo(int bar){
	printf("%d dipanggil dari foo",bar);
}
