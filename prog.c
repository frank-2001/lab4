#include <stdio.h>

double sum(double arr[], int N){
	double total = 0.0;
	int counter = 0;
	while(counter < N){
		total+= arr[counter];
		counter++;
	}
	return total;

}


int main(){
	printf("Hello World!\nThis is the first modification\n");

}
