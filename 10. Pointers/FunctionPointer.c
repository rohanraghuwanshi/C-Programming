#include<stdio.h>

int  sum(int a,int b){
return a+b;
}


void main(){

int a ,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);

int (*p)(int,int) =&sum;  // Now p is not a simple pointer its a function pointer.
					//How can we know? because it has braces and some arguments .
					//and also p can only hold address of a function which returns and int and accepts two argument of type int, None other.
printf("\nSum is %d.\n",(*p)(a,b));  // Here we just called the function sum with the help of its pointer.

}

	

