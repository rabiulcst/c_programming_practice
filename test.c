#include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number : ");
	scanf("%d",&n);

	printf("Type -1 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
			printf("1 ");
		printf("\n");
	}
	printf("Type -2 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
			printf("* ");
		printf("\n");
	}
	printf("Type -3 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=1; j<=n; j++)
			printf("%d ", i);
		printf("\n");
	}

	printf("Type -4 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
			printf("%d ", j);
		printf("\n");
	}
	printf("Type -5 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("1 ");
            else
                printf("* ");
        }
		printf("\n");
	}
	printf("Type -6 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
        {
            if(i==1 || i==n || j==1 || j==n || i==n/2 || j==n/2)
                printf("* ");
            else
                printf("1 ");
        }
		printf("\n");
	}
	printf("Type -7 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
        {
            if(i==1 || i==n || j==1 || j==n || i==n/2 || j==n/2 || i==n/4 || j==n/4)
                printf("* ");
            else
                printf("1 ");
        }
		printf("\n");
	}
	printf("Type -8 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("1 ");
            else
                printf("  ");
        }
		printf("\n");
	}
	printf("Type -8 : \n");
	for(i=1; i<=n; i++)
	{
	    printf("\t");
		for(j=n; j>=1; j--)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("1 ");
            else if(i==j)
                printf("* ");
            else
                printf("  ");
        }
		printf("\n");
	}
}
