#include<stdio.h>
//selection sort function to sort an array
void selectionsort(int a[],int n){
	int i,j,flag,idx;
	for(i=0;i<n-1;i++)
	{
		idx=i;
		for(j=i+1;j<n;j++)  //this for loop finds the smallest element 
		{
			if(a[idx]>a[j])
	    	idx=j;       // storing index which have smallest element
		}
		int temp=a[idx]; //swapping smallest element and and ith index element 
	        a[idx]=a[i];
    	    a[i]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	selectionsort(a,n); //call to selection sort function
	//Time complexity for selection sort is O(n^2)
	printf("sorted array is ");
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);              
}