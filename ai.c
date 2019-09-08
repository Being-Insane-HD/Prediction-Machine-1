#include"stdio.h"
#include"conio.h"
main()
{
	int n,b,c,d,e,f,i,j,a[10][10],pre[10],err[10],es=0,en;
	printf("Enter no. of students:\n");
	scanf("%d",&n);
	printf("Enter marks of students in the subject for 2017, 2018, 2019:\n");
	for(i=0;i<3;i++)
	{
		b=2017+i;
		printf("%d\n",b);
		for(j=0;j<n;j++)
		{
			printf("Student %d: ", j+1);
			scanf("%d",&a[i][j]);
			printf("\n");
		}

	}
	system("cls");
	for(i=0;i<3;i++)
	{
		b=2017+i;
		printf("%d\n",b);
		for(j=0;j<n;j++)
		{
			printf("Student %d: ", j+1);
			printf("%d",a[i][j]);
			printf("\n");
		}
	}
	for(j=0;j<n;j++)
	{
		c=a[1][j]-a[0][j];
		d=a[2][j]-a[1][j];
		if(a[2][j]>a[0][j])
		{
   			e=a[0][j]-a[2][j];
   			f=(c+d-e)/6;
		}
		else
		{
			e=a[2][j]-a[0][j];
			f=(c+d+e)/11;
		}
        err[j]=(e/f);
        es+=err[j];
		//printf("%d",f);
	}
	printf("predicted marks in 2020:\n");
	for(j=0;j<n;j++)
	{
		pre[j]=a[2][j]+f;
		printf("student %d: %d",j+1,pre[j]);
		printf("\n");
	}
	en=es/n;
	printf("Max error: %d",en);
return 0;
}
