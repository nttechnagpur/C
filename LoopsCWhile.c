#include <stdio.h>
int main()
{
	int n,i;
	printf("\nEnter How Many Number You Want Print!: ");
	scanf("%d",&n);
	printf("While Loop\n");
	i=1;
	while(i<n){
		printf("%d\n",i);
		i++;
	}
	return 0;
}
