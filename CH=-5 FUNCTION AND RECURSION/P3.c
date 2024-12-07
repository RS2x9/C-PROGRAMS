// we can call function many times using loops 
#include<stdio.h>

void pp() ;

void pp(){
    printf("Hello \n");
} 

int main(){
    for (int i=1 ; i<=3 ; i++) pp();
    return 0;
}