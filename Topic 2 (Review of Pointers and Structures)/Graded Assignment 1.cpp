#include<iostream>

using namespace std;

struct rational {
   int numerator;
   int denominator;
} ;

void reduce(struct rational *inputrational, struct rational *outputrational) ;
bool isEqual(struct rational num1, struct rational num2);

int main() {
   int result;
   struct rational num1, num2;
   cout << "Enter Details of Number 1 " << endl;
   cout << "Enter Numerator :" << endl;
   cin >> num1.numerator;
   cout << "Enter Denominator :" << endl;
   cin >> num1.denominator;
   cout << "Enter Details of Number 2 " << endl;
   cout << "Enter Numerator :" << endl;
   cin >> num2.numerator;
   cout << "Enter Denominator :" << endl;
   cin >> num2.denominator;
   result = isEqual(num1, num2);     //to check rational 'num1' is equal to rational 'num2'
   if(result == true)
      cout << "Both rational numbers are equal" << endl;
   else
      cout << "Both rational numbers are not equal" << endl;
   return 0;
}

/*Question: Reduce the number 'inputrational' to its lowest form and store it in 'outputrational'
struct rational *inputrational  : Actual rational number to be reduced
struct rational *outputrational : Variable to store the rational number in its lowest form */
void reduce(struct rational *inputrational, struct rational *outputrational)
{
    //Write your solution code below this line
    int Max,i;

    outputrational->numerator = inputrational->numerator;
    outputrational->denominator = inputrational->denominator;

    if ( (outputrational->numerator) > (outputrational->denominator) ) Max = inputrational->numerator;
    else Max = outputrational->denominator;

    for(i=2;i<=Max/2;i++)
     {
    	  if((outputrational->numerator)%i ==0 && (outputrational->denominator)%i ==0)
    	  {
    	    (outputrational->numerator)/=i;
    		(outputrational->denominator)/=i;
    		i=1;
		  }
	  }


}

/* Question: Check whether both the rational numbers obtained in the lowest form are equal or not.
             Retrun true or false accordingly
*/
bool isEqual(struct rational num1, struct rational num2)
{
    //Write your solution code below this line

    rational *num1_reduced = new rational;
    reduce(&num1, num1_reduced);

    rational *num2_reduced = new rational;
    reduce(&num2, num2_reduced);

    bool result = num1_reduced->numerator == num2_reduced->numerator
    && num1_reduced->denominator == num2_reduced->denominator;

    delete num1_reduced;
    delete num2_reduced;

    return result;
}
