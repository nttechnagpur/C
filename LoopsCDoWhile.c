#include <stdio.h>
int main()
{
	int n,i;
	printf("\nEnter How Many Number You Want Print!: ");
	scanf("%d",&n);
	printf("Do_While Loop\n");
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	} while (i<n);
	return 0;
}
