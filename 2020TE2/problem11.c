#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	if(a % 2 == 0){
	printf("%d\n", a%9);
}else{
	printf("%d\n", a % 8);
}
return 0;

}
