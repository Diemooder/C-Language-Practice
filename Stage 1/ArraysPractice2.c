#include <stdio.h>

int main(){
	int x;
	printf("How many integers?: ");
	fflush(stdout);
	scanf("%d", &x);
	
	int num[x];
	int smallest_num;
	printf("Enter %d numbers: ", x);
	fflush(stdout);
	for(int i = 0; i < x; i++){
		scanf("%d", &num[i]);
		if(i == 0) smallest_num = num[i];
		else smallest_num = num[i] < smallest_num ? num[i] : smallest_num;
	}
	
	printf("Smallest number: %d\n", smallest_num);

	printf("Found at positions: ");
	for(int i = 0; i < x; i++){
		if(num[i] == smallest_num) printf("%d ", i);
	}
	
	return 0;
}