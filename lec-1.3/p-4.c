#include<stdio.h>
main(){
	int a;
	printf("enter your age :\n");
	scanf("%d" ,&a);
	
	if(a<=0){
		printf("please enter valid age");
	}
	
	else if(a>=18){
		printf("you are eligible for vote");
	}
	
	else{
		printf("you are not eligible for vote");
	}
	
}
