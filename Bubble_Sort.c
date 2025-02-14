#include<stdio.h>
//bubble sort function to sort an array 
void bubblesort(int a[],int n){
	int i,j,flag;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-i-1;j++)
	    if(a[j]>a[j+1]) //if this condition satisfies then only swapping of two numbers takes place
    	{
	    	int temp=a[j];  //swapping two numbers 
	    	a[j]=a[j+1];
		    a[j+1]=temp;
		    flag=1;
    	}
    	if(flag==0) //if flag remains zero indicates array was sorted then break
		break;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubblesort(a,n);  //call to bubble sort function
	//Time complexity for bubble sort is O(n^2)
	printf("sorted array is ");
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);              
}