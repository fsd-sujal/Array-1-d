#include<stdio.h>

main()
{
	int a[]={12,89,57,65,35,387,35,354,63,3,90};
	int i,len;
	len = sizeof(a)/sizeof(0);
	printf("Length Of aLL ARRAY =",len);
	for(i=0;i<=len;i++)
	{
		printf("%d\n",a[i]);
	}
}
