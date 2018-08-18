#include <stdio.h>



void printarray(int arr[],int size)
{	
	for(int i=0;i<size;i++)
	{
		printf("%d \t",arr[i]);
	}
}


void reversearray(int arr[],int start,int end)
{	
	int temp;
	while(start<end)
		{
			temp=arr[start];
			arr[start]=arr[end];
			arr[end]=temp;
			start++;	
			end--;
		}
}
void rotatearray(int arr[],int d, int n)
{
	
	reversearray(arr,0,d-1);
	reversearray(arr,d,n-1);
	reversearray(arr,0,n-1);
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int d;
	printf("Enter the no of array rotations \n");
	scanf("%d",&d);
	int n=sizeof(arr)/sizeof(arr[0]);
	rotatearray(arr,d,n);
	printarray(arr,n);
	return 0;
}
