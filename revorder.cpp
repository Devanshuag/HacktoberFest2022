#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i;
	int arr[5];

	printf("Enter The Number:\n");

	for(i=0; i<5; i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("Reverse Order:\n");
	for(i=4; i>=0; i--)
	{
		printf("%d\n",arr[i]);
	}
	getch();
	return 0;
}
