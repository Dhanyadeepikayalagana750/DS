#include<stdio.h>
using namespace std;
int main()
{
	int a[50],size,i,num,pos;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter data that you want to insert");
	scanf("%d",&num);
	printf("Enter position:");
	scanf("%d",&pos);
	for(i=size-1;i>=pos;i--)
	{
	a[i+1]=a[i];
	}
	a[pos]=num;
	size++;
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
