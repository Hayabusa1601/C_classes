#include<stdio.h>

int main(){
	int hand;
	do{
		scanf("%d",&hand);
	}while(hand < 0 || hand> 2);

	switch(hand){
	 case 0: printf("グー"); break;
	 case 1: printf("チョキ"); break;
	 case 2: printf("パー"); break;
}
return 0;
}
