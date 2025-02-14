#include<stdio.h>
//merge sort function to sort an array
void merge(int a[],int start,int mid,int end,int n){
	int i=start;
	int j=mid+1;
	int b[end-start+1];
	int k=0;
	//merging 1st and 2nd parts
    while(i<=mid && j<=end)
    {
    	if(a[i]<a[j])
            b[k++]=a[i++];
        else b[k++]=a[j++];
	}
    while(i<=mid)  //if still elements are remaining in 1st part
    b[k++]=a[i++];
    while(j<=end)  //if still elements are remaining in second part
    b[k++]=a[j++];
    k=0;
    for(int i=start;i<=end;i++)  //elements copying to a from b
    a[i]=b[k++];
}
void merge_sort(int a[],int n,int start,int end){
	
	int mid;
	//base case 
	if(start>=end)
	return;
	mid=(start+end)/2;          //dividing array into parts
	merge_sort(a,n,start,mid);   //it divides 1st part upto single element 
	merge_sort(a,n,mid+1,end);   //it divides 2nd part
	merge(a,start,mid,end,n);   //calling merge function
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    merge_sort(a,n,0,n-1);  //calling mergesort function
    //Time complexity for merge sort is O(nlogn)
	printf("sorted array is ");
    for(int i=0;i<n;i++)
	printf("%d ",a[i]);              
}