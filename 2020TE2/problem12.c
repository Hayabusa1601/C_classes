#include<stdio.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);

	if(a - b >= 0){
	printf("%.2f\n", a - b);

}else{

	printf("%.2f\n", b - a);
}
return 0;

}



	
