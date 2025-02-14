#include<stdio.h>
//insertion sort function to sort an array
void insertionsort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp = a[i]; //pick the current element
		int j=i-1;
		while(j>=0 && a[j]>temp){    //shift the elements to their correct positions which are greater than temp
		    a[j+1]=a[j];
	    	j--;	
		}
		a[j+1]=temp;   // replace the temp in correct position
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	insertionsort(a,n);  //call to insertion sort function
	//Time complexity for insertion sort is O(n^2)
	printf("sorted array is ");
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);              
}