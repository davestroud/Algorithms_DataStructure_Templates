/**
 * prime.cpp - This program determines if a given numebr is a prime.
 *
 * Dr. Jack Davault
 * CS3339 Data Strtuctures and Algorithms
 */

#include <iostream>
#include <cstdlib>

using namespace std;

bool isPrime(int number);
void printResults(int number, bool numberIsPrime);

int main(int argc, char **argv)
{
   if (argc < 2)
   {
      cerr << "Usage: " << argv[0] << " [integer]" << endl;
      return 1;
   }

   // Convert the passed is string to a number
   int number = atoi(argv[1]);

   // Call the isPrime function and pass in the user entered number
   bool numberIsPrime = isPrime(number);
 
   // Print the results
   printResults(number, numberIsPrime);

   return 0;   
}

bool isPrime(int number)
{
   bool prime = true; // Assume the number is prime by default

   // A number less than or equal to 2 is already prime, so check if n is 
   // greater than 2.
   if (number > 2)
   {
      // Loop through the value of n+2
      for (int i=2; i < number + 2; i++)
      {
         if (number != i)
         {
            // If n % i is equal to 0 than there is no remainder, so
            // the loop index divides the number, which means it is not
            // prime. Break out of the loop, since there is no need to
            // continue.
            if (number % i == 0)
            {
                prime = false;
                break;
            }
 
            // If there is a remainder then the value must still be
            // prime until we reach the end of the loop.
         }
      }
   }

   return prime;
}

void printResults(int n, bool numberIsPrime)
{
   // Print the results
   cout << "Number= " << n << " isPrime= ";

   if (numberIsPrime)
      cout << "TRUE" << endl;
   else
      cout << "FALSE" << endl;

   return;
}

