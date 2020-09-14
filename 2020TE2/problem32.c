#include<stdio.h>

int main(){

	int a, b,c ;
	printf("%d\n", a);
	printf("%d\n", b);
	for( a = 0,b = 1; a+b < 50000; a = b, b = c){
	c = a+b;
	printf("%d\n", c);

}
return 0;
}

