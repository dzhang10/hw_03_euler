#include <stdio.h>


//Euler Problem #1
/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.*/

double sum_of_multiple(){
	double sum = 0;
	int addend;

	for(addend=3; addend < 1000; addend++){
		if(addend%3==0 || addend%5==0){
			sum+=addend;
		}
	}
	return sum;
}



//Euler Problem #6
/*Find the difference between the sum of the squares of the first one hundred natural
numbers and the square of the sum. */

double difference_of_square(){


}



int main(){

	double sum = sum_of_multiple();
	printf("Problem 1: %0.0lf\n",sum);


	return 0;
}
