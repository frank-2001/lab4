#include <stdio.h>

int strlen_(const char* str){
	int i = 0;
	for(i = 0; str[i] != '\0'; i++){
		
	}
	return i;
}

int add(int nbr1, int nbr2){
	return nbr1+nbr2;
}
int main(){
		printf("strlen.......\n");
	char* j = "Hello UCBC_";
	int lenght = strlen_(j);

	printf("The length of %s is %i characters\n",j,lenght);

	printf("\n");

	printf("Add two numbers: \n");
	int a = 4;
	int b = 5;


	printf("The sum of %i and %i is %i", a,b,add(a,b));

}
	
