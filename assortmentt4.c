#include <stdio.h>
main() 
{
    int r,c;
    
    printf("Enter the array's row size: ");
    scanf("%d",&r);
    
    printf("Enter the array's column size: ");
    scanf("%d",&c);
    
    int a[r][c];
    

    printf("Enter the elements of the %dx%d array:\n",r,c);
    for (int i=0;i<r;i++) 
	{
        for (int j=0;j<c;j++) 
		{
			printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    int row,col,rowSum=0,colSum=0;
    
    printf("Enter the row number to find sum: ");
    scanf("%d",&row);
    
    printf("Enter the column number to find sum: ");
    scanf("%d",&col);
    
    for (int j=0;j<c;j++) 
	{
        rowSum += a[row][j];
    }
    
    for (int i=0;i<r;i++) 
	{
        colSum += a[i][col];
    }
    
    printf("Elements of row %d:\n", row);
    for (int j=0;j<c;j++) 
	{
        printf("%d ",a[row][j]);
    }
    printf("\nSum of row %d: %d\n",row,rowSum);
    
    printf("Elements of column %d:\n",col);
    for (int i=0;i<r;i++)
	 {
        printf("%d\n",a[i][col]);
    }
    printf("Sum of column %d: %d\n",col,colSum);
}