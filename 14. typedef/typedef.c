#include<stdio.h>

struct datatype{
int a,b;
};
							//typedef is used to define custom datatypes using existing datatypes.
typedef struct datatype newtype;  	 //typedef is keyword, struct is madatory for using struct , 
							//datatype is the structure name, newtype is name of the
							//abbreviated data type we've created using typedef. 


int sum(newtype toSum){

return toSum.a+toSum.b;
}

void main(){
newtype variable; // now variable newtype will work like any identifier (int,char,float);

printf("\nEnter number a : ");   			//assigning data to structure variables
scanf("%d",&variable.a);				

printf("\nEnter number b :");
scanf("%d",&variable.b);

printf("Sum is %d.\n",sum(variable));
}
