// Write a Program to find the minimum number from the given 5 numbers using nested if else.
#include<stdio.h>
main(){
	
 int a,b,c,d,e;
   
   printf("Enter a: ");
   scanf("%d", &a);
   printf("Enter b: ");
   scanf("%d", &b);
   printf("Enter c: ");
   scanf("%d", &c);
   printf("Enter d: ");
   scanf("%d", &d);
   printf("Enter e: ");
   scanf("%d", &e);
   
   if(a<b){
   		if(a<c){
   			if(a<d){
   				if(a<e){
   					printf("a is min.");
				   }else{
				   	printf("e is min.");
				   }
			   }else{
			   	if(d<e){
			   		printf("d is min.");
				   }else{
				   	printf("e is min.");
				   }
			   }
		   }else{
		   		if(c<d){
		   			if(c<e){
		   				printf("c is min.");
					   }else{
					   	printf("e is min.");
					   }
				   }else{
				   	 if(d<e){
				   	 	printf("d is min.");
						}else{
						printf("e is min.");
						}
				   }	
		   }
   }else{
   		if(b<c){
   			if(b<d){
   				if(b<e){
   					printf("b is min.");
				   }else{
				   	printf("e is min.");
				   }
			   }else{
			   	if(d<e){
			   		printf("d is min.");
				   }else{
				   	printf("e is min.");
				   }
			   }
		   }else{
		   		if(c<d){
		   			if(c<e){
		   				printf("c is min.");
					   }else{
					   	printf("e is min.");
					   }
				   }else{
				   	 if(d<e){
				   	 	printf("d is min.");
						}else{
						printf("e is min.");
						}
				   }	
		   }
   }
}
