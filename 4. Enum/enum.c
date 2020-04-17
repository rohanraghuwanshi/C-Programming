// Program to show the special data type
#include<stdio.h>

int main() {
    
    enum week{Mon=10, Tue, Wed, Thur, Fri=20, Sat=16, Sun};
    printf("The value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
    
    return 0;
}