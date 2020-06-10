#include <stdio.h>

/*
 * struct kumpulan variable pada variable */


struct point{
	int x;
	int y;
};

/*
 *typedef struct yang dapat didefinisikan kembali menjadi variable lain
 * */

typedef struct{
	char * brand;
	int unit;

} vehicle;

int main(){
	struct point p;
	p.x = 1;
	p.y = 2;

	vehicle mobil;
	mobil.brand = "toyota";
	mobil.unit = 4;

	printf("x = %d, y = %d\n", p.x, p.y);
	printf("beli mobil %s %d\n", mobil.brand, mobil.unit);

}
