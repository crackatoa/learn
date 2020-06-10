#include <stdio.h>

void cetak(int angka){
	printf("print angka %d dari fungsi cetak\n",angka);
}

int main(){
	void (*pf)(int);
	pf = &cetak;
	(pf)(1000);
	return 0;
}
