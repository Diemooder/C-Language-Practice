#include <stdio.h>

int main(){
	int x, y;
	printf("Write two numbers: ");
	fflush(stdout);
	scanf("%d %d", &x, &y);
	
	printf("Sum: %d\n",x+y);
	printf("Product: %d\n",x*y);
	if(x != y) printf("%d is greater than %d", x > y ? x:y, x > y ? y:x);
	else printf("%d and %d are equal", x, y);
	
	return 0;
}