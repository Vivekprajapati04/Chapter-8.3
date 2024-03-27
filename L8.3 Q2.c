#include<stdio.h>

main()

{
	int r,c;
	
	printf("Enter Row Size=");
	scanf("%d",&r);
	printf("Enter Column Size=");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],i,j, sum[i][j];
	
	printf("Enter A Array Elements=\n");	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	printf("Enter B Array Elements= \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("b[%d][%d]= ",i,j);
			scanf("%d",&b[i][j]);
		}
		
	}
	
	printf("Sum A & B Array Elements= \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			sum[i][j]= a[i][j] + b[i][j];
			printf("%d ",sum[i][j]);
		
			
		}
		printf("\n");
	}
	//	printf("sum of all 2D Array Elements= %d\n",sum);
	
}