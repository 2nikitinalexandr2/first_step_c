#include <stdio.h>
#include <string.h>
char *fizz_buzz (int x);
int main(){
	int i;
	for (i = 1; i<=100; i++){
		char *result = fizz_buzz(i);
		if (result != NULL)
			printf("%s\n", result);
		/*else if ( (i % 3 == 0) && (i % 5 == 0)){
		  printf ("FizzBuzz\n");}*/
		/*else if (i % 3 == 0){
		  printf("Fizz\n");}*/
		/*else if (i % 5 == 0){
		  printf("Buzz\n");}*/
		else
			printf("%d\n", i);
	}
}
char *fizz_buzz (int x) {
	if (x % 15 == 0)
		return "FizzBuzz";
	if (x % 3 == 0)
		return "Fizz";
	if (x % 5 ==0)
		return "Buzz";
	return NULL;}
