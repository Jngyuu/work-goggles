#include <stdio.h> 
#define N 6
int main()
{
	int arr[N]={8,3,6,2,7,1};
	for(int i=0;i<N-1;i++)
{
	for(int j=0;j<N-i-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			
		}
	}
}
for(int k=0;k<N;k++)
{
	printf("%d",arr[k]);
}
    return 0;
}

