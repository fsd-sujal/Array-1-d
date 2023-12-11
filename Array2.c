#include<stdio.h>

main()
{
	int n;
	printf("This Is The Size Of Array =");
	scanf("%d",&n);
	int a[n];
	printf("Enter The All Element =\n");
	int i,sum=0,ave;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("A =%d\n",a[i]);
		sum = sum + a[i];
	}
	printf("Finnaly Ans= %d\n",sum);
	ave = sum/n;
	printf("Ave is = %d\n",ave);
}

