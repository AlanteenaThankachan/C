#include<stdio.h>
struct Polynomial
{
 int coeff;
 int expo;
 };
 void main()
 {
 
	int term,n,i;
	printf("Enter the number of terms=");
	scanf("%d",&n);
	struct Polynomial x[n];
	printf("Enter the coefficent term and Expo in decending order\n");
	for(i=0;i<n;i++)
	{
	 printf("Coefficent=");
	 scanf("%d",&x[i].coeff);
	 printf("Expo=");
	 scanf("%d",&x[i].expo);
	 }
	 for(i=0;i<n;i++)
	 {
	  printf("(%dx^%d)",x[i].coeff,x[i].expo);
	  if(i<(n-1))
	 {
	 printf("+");
	 }
	}
}

	 
