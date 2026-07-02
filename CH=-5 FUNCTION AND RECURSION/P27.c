// Q4) make your own power function
// with recursion

    #include<stdio.h>
    #include<math.h>
    float power( float base , float exp)
    {
        if ( exp == 0) return 1 ;
        if (exp >0) return base* power( base , exp-1);
        if ( exp <0) return 1/( power( base , -exp));
    }
    int main()
    {
        float base , exp;
        printf("Enter base: ");
        scanf("%f" , & base);
        printf( "Enter exp: ");
        scanf( "%f" , &exp);
        printf( "%f" , power( base , exp));
        return 0;
    }
