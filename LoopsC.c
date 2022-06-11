#include <stdio.h>
int main()
{
	int n,i;
	printf("\nEnter How Many Number You Want Print!: ");
	scanf("%d",&n);
	printf("While Loop\n");
	i=1;
	while(i>n){
		printf("%d\n",i);
		i++;
	}
	printf("Do_While Loop\n");
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	} while (i>n);
	printf("For Loop\n");
	for(i=1; i<n; i++)
	{
		printf("%d\n",i);
	}
	return 0;
}
