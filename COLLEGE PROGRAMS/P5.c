//Pre-processor directives
#include <stdio.h>
#include<stdlib.h>
int main()
{
 int m,n,p,q,i,j,k;
 printf("Enter number of rows and columns of matrix A: "); //order of matrix A
 scanf("%d%d",&m,&n);
 printf("\nEnter number of rows and columns of matrix B: "); //order of matrix B
 scanf("%d%d",&p,&q);
 //Check for the Compatibility for multiplication
 if (n != p)
 {
printf("\nMatrix multiplication is not possible !");
exit(0);
 }
 int a[m][n],b[p][q],c[m][q];
 //Read matrix A elements
printf("\nEnter %d elements for matrix A:\n",m*n);
for (i=0;i<m;i++)
 for (j=0;j<n;j++)
 scanf("%d",&a[i][j]);
// Read matrix B elements
printf("\nEnter %d elements for matrix B:\n",p*q);
for (i=0;i<p;i++)
 for (j=0;j<q;j++)
 scanf("%d",&b[i][j]);
//Matrix Multiplication
for (i=0;i<m;i++)
{
 for (j=0;j<q;j++)
 {
 c[i][j]=0;
 for (k=0;k<p;k++)
 c[i][j] = c[i][j] + a[i][k]*b[k][j];
 }
 }
//Print matrix A elements
printf("\nMatrix A (%dx%d):\n",m,n);
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 printf("%6d",a[i][j]);
 printf("\n");
}
 //Print matrix B elements
printf("\nMatrix B (%dx%d):\n",p,q);
 for(i=0;i<p;i++)
 {
 for(j=0;j<q;j++)
printf("%6d",b[i][j]);
 printf("\n");
 }
 //Print resultant matrix C elements
 printf("\nResultant Matrix C (%dx%d):\n",m,q);
 for (i=0;i<m;i++)
 {
 for (j=0;j<q;j++)
 printf("%6d",c[i][j]);
 printf("\n");
 }
 return 0;
}