#include<stdio.h>
//partition function
int partition(int a[],int key,int start,int end){
	int s=start+1,e=end;
	while(s<=e){
		while(a[s]<=key && s<=e)//to shift the smaller elements to left
		s++;
		while(a[e]>=key && e>start) //to shift the larger elements to right
		e--;
		if(s<e){  //swap the elements
			int temp=a[s];
			a[s]=a[e];
			a[e]=temp;
		}
	}
	//shift the pivot to correct position
	int temp=a[start];
	a[start]=a[e];
	a[e]=temp;
	return e; //return the pivot index
}
void quicksort(int a[],int n,int start,int end){
	if(start<end){
		int p=a[start];//taking pivot as first element
		p=partition(a,p,start,end);
		
		quicksort(a,n,start,p-1);  //to sort the left part 0 to p-1
		
		quicksort(a,n,p+1,end);   // to sort the right part p+1 to end
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    quicksort(a,n,0,n-1);  //calling quicksort function
    //Time complexity for quick sort is O(n^2)
	printf("sorted array is ");
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);              
}