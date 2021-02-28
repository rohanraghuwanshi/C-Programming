#include<stdio.h>
#include<string.h>

//This program illustrates the use of typecast
//That how can we make the things happen with the help of programming logic.
char invert(char ch){
if(ch>='a' && ch<='z'){
	return ('a' - ch +'z');  //this returns a char which is typecasted using sinple braces.
	}
return ch;
}

void main(){

char string[]="knowledge";
int i =0;
for(i=0;i<strlen(string);i++){
string[i]=invert(string[i]);
}

printf("%s",string);
}


