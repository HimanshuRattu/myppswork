#include<stdio.h>

int main()
{
	int arr[30],N,sum=0;
	printf("How many integers you want to enter : ");
	scanf("%d",&N);
	//entering integers
	printf("Enter Integers : ");
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	//adding integers
	for(int j=0;j<N;j++)
	{
		sum=sum+arr[j];
	}
	//printing sum of N integers
	printf("\nThe sum Of %d integers : %d",N,sum);
	return 0;
}