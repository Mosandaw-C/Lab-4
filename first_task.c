/* Task description:

Write functions that receive a real number parameter, and return:

    cube() – its third power,
    absolute() – its absolute value (there is a fabs() library function but do not use it this time)! 

Write a program that tabulates the values of a, a3, |a| and sin(a) using 4 decimal digits after the decimal point from a = −1 to +1, stepping by 0.1! Include math.h to use sin.

*/
#include <stdio.h>


// We defined the function and used float for the parameter
double cube(double  x){
	return x * x * x;
}
/*Write the other functions here:*/

double abso(float x) {

	if (x < 0.0)
		x = -1 * x;
	return x ;
}


int main() //main is a function!
{
//call the functions in a loop to print the results in the required manner

	for (double  i = -1; i < 1; i= i + 0.1){
	
	printf("a %+6f abs %6f cube %+6f\n", i , abso(i) , cube(i));
	}


  return 0; //it returns an integer (as promised in the header) which is 0 for now!
}
