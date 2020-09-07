#include<stdio.h>

void BubbleSort(int *aa, int n)
{
	int tmp;
	int i, j;
	int exchange = 0;
	for(i=0; i<n-1; i++)
	{
		for(j=n-1; j>i; j--)
		{
			if(aa[j] < aa[j-1])
			{
				tmp = aa[j];
				aa[j] = aa[j-1];
				aa[j-1] = tmp;
				exchange = 1;
			}
		}
		if(exchange == 0)
			break;
	}
}

int main()
{
	int i;
	int a[10] = {23,13,56,2,36,84,16,49,17,62};
	printf("ÅÅÐòÇ°: ");
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	BubbleSort(a, 10);
	printf("ÅÅÐòºó: ");
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
