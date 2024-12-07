// we can directly write FUNCTION DECLARATION PART WITHOUT FUNCTION PROTOTYPE
#include<stdio.h>
void pp(){
    printf("Hello \n");
}
int main()
{
    for (int i=1 ; i<=3 ; i++) pp();
    return 0;
}