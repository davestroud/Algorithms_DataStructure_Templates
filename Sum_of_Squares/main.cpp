/**
 * sumOfSquares.cpp - This progam implements the sumOfSquares() function
 *                   described in the handout.
 *
 * Name and Course Number: John 'David Stroud' CS 3330
 */

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>

 int sumOfSquares(int n);

 int main(int argc, char const *argv[]) {
   std::cout << "sumOfSquares(1) is " << sumOfSquares(2) << std::endl;
   std::cout << "sumOfSquares(16) is " << sumOfSquares(16) << std::endl;
   std::cout << "sumOfSquares(23) is " << sumOfSquares(23) << std::endl;
   std::cout << "sumOfSquares(8) is " << sumOfSquares(8) << std::endl;
   std::cout << "sumOfSquares(67) is " << sumOfSquares(67) << std::endl;

   std::cout << "\n** Press any key to continue **\n\n" << std::endl;;
   getchar();

   return 0;
 }

 int sumOfSquares(int n){
  if (n == 0)
      return 0;
  else
    return 1 * sumOfSquares(n -1) + n * n;

 }
