//   THIS PROGRAM IS INCOMPLETE
// Q2) PROGRAM TO PRINT HIGHEST FREQUENCY CHARACTER IN A STRING 
#include<stdio.h>
#include<string.h>
#define max 10

//int countsmax(int counts[max]);
char givech(int i,char str[max])
{
    char ch=str[i-1];
}

int main()
{
    char str[max];
    printf("Enter a string:");
    fgets(str,max,stdin);
    //if str[0]='\0' exit(0);

    int length =strlen(str)-1;      // fgets() is counting new character on pressing enter key
    int length2=length-1;
    printf("Length of entered string:%d \n",length);
    int count=1;
    int counts[max]; 
    for (int i=0 ,j=0 ; i<length , j<length2 ; i++ , j++)
    {
        if(str[i]==str[j+1] && givech(i-1,str)!=str[i])
        {
            count=count+1; 
        }
        //printf("\n %d ",count);
        counts[i]=count;  // value of total count of each character is stored in counts[]
        count=1;
    }

    for (int i=0; i<5 ; i++)
    {
        printf("%d ",counts[i]);
    }
    return 0;

}

// making function to find the maximum value in counts[]

