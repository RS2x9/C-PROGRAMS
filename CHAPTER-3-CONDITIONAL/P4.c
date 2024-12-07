// printing days of weeks using switch
#include<stdio.h>
int main() 
{
    char day ;
    printf("Enter first charcter of weeks : ") ;
    scanf("%c",& day); 

    switch (day)
    {
        case 'S' :
        printf("Sunday") ;
        break ;

        case 's' : 
        printf("saturday") ;
        break ;

        case 'm' : 
        printf("Monday") ;
        break ;

        case 't' : 
        printf("Tuesday") ;
        break ;

        case 'w' : 
        printf("Wednesday") ;
        break ;

        case 'T' : 
        printf("Thrusday") ;
        break ;

        case 'f' : 
        printf("Friday") ;
        break ;
        
        default : 
        printf("What the hell this input is.....") ;
    }
}