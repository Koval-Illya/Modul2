#include<stdio.h>


void reverse_array(int a[],int left,int right)
{
	int temp=0;
	if(left<right)
	{
		temp=a[left];
		a[left]=a[right]; 
		a[right]=temp;
		
		reverse_array(a,left+1,right-1);
	}
}


int main()
{
	int a[100],i,n;
	
	printf("\nHow many elements do you want in your array?");
	scanf("%d",&n);
	
	printf("\nFeed the array plz ");
	for(i=0;i<n;i++)
	{
		printf("\nElement № %d => ",i+1);
		scanf("%d",&a[i]);
	}
	
	reverse_array(a,0,n-1);
	
	printf("\n\nThe recursively sorted array is \n { ");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	printf(" } ");
	
	return 0;
}