#include <stdio.h>
#include <conio.h>

main()
{
	int a,b,c;

	clrscr();

	printf("ENTER THE VALUR : ");
	scanf("%d %d %d",&a,&b,&c);

	if(a<b)
	{
		if(a<c)
		{
			printf("%d is minimum number : ",a);

		}
		else
		{
			printf("%d is minimum number : ",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is minimum number : ",b);
		}
		else
		{
			printf("%d is minimum number : ",c);
		}
	}


	getch();
}