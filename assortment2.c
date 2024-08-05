#include<stdio.h>
main()
{
	int r,c,i,j;
	printf("enter the array row size : ");
	scanf("%d",&r);
	 
	printf("enter the array column size : ");
	scanf("%d",&c);
	 
	int a[r][c];
	printf("enter array's' elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int l=a[0][0];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>l)
			{
				l=a[i][j];
			}
		}
	}
	printf("the largest element is:%d\n",l);
}