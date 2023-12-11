#include<stdio.h>

main()
{
	int n;
	printf("Enter your array");
	scanf("%d",&n);
	int a[n];
	printf("Enter Element\n\n");
	int i,len;
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("A = %d\n",a[i]);
	}
}
