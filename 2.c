#include<stdio.h>
int main()
{
	int n;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	int k;
	printf("Enter the target sum:");
	scanf("%d",&k);
	int i=0;
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int s=0;
	int e=0;
	if(a[s]==k) //If first element is the target sum.
	{
		printf("i=0");
		printf("\n");
		printf("j=0");
	}
	else
	{
		int sum=a[0];
		i=1;
		while(i<n)
		{
			
			if(sum<k)   //Continue adding target sum not reached
			{
				sum+=a[i];
				e+=1;i++;
			} 
			else if(sum>k)   //Target sum exceded keep minimizing by decrementing head elements(index s)
			{
				sum=sum-a[s];
				s=s+1;
				
			}
			else      //Target sum found
			{
				
				printf("i=%d",s);
				printf("\n");
				printf("j=%d",e);
				break;
			}
		}
	}
}
//Priority queue would be an approach.

