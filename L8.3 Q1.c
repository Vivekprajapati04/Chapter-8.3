#include<stdio.h>

main()

{
	int r,c;
	
	printf("Enter Row Size=");
	scanf("%d",&r);
	printf("Enter Column Size=");
	scanf("%d",&c);
	
	int a[r][c],sum=0,size,ave,i,j;
	printf("Enter Array Elements=\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			sum=sum + a[i][j];
			printf("%d",a[i][j]);
		
			
		}
		printf("\n");
	}
	printf("sum of all 2D Array Elements= %d\n",sum);
	size= sizeof(a)/sizeof(a[0][0]);
	printf("size Of array= %d\n",size);
	ave = sum /size;
	printf("Aeverage Of Array=%d\n",ave);
}