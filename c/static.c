#include <stdio.h>

/*
berapa kali dipanggil pun nilai count akan tetap 0
*/
int runner(){
	int count = 0;
	count++;
	return count;
}

/*
 static variable dapat diakses diluar fungsi
sehingga nilai int c tidak bernilai 0 ketika fungsi
dipanggil lagi untuk kedua kalinya
*/
int staticrunner(){
	static int c = 0;
	c++;
	return c;
}

int main(){
	printf("%d ", runner());
	printf("%d ", runner());
	printf("\n%d ", staticrunner());
	printf("%d ", staticrunner());
}
