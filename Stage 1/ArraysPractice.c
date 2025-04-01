#include <stdio.h>

int main(){
	int x;
	printf("How many integers you want to input?: ");
	fflush(stdout);
	scanf("%d", &x);
	
	int list[x];
	printf("Enter %d numbers: ", x);
	for(int i = 0; i < x; i++){
		fflush(stdout);
		scanf("%d", &list[i]);
	}
	
	int sum = 0;
	int largest = 0;
	for(int i = 0; i < x; i++){
		sum += list[i];
		largest = list[i] > largest ? list[i] : largest;
	}
	
	float avg = (float) sum / x;

	printf("Sum: %d\n", sum);
	printf("Average: %.1f\n", avg);
	printf("Largest: %d\n", largest);
	return 0;
}