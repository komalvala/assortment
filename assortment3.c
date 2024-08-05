#include<stdio.h>

main() 
{
    int r,c,i,j;
    
    printf("Enter the array's row & column size: ");
    scanf("%d",&r);
    c = r;
    int a[r][c], transpose[c][r];

    printf("Enter array elements:\n");
    for (i=0; i<r;i++) {
        for (j=0;j<c;j++) 
		{
			printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            transpose[j][i]=a[i][j];
        }
    }

    printf("the Transpose matrix of an array:\n");
    for (i=0;i<c;i++) 
	{
        for (j=0;j<r;j++) 
		{
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

}