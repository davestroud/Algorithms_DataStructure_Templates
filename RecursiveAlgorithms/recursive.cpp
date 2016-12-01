#include <iostream>
using namespace std;

int f( int x )
{
    if( x == 0 )
        return 0;
    else
        return 2 * f( x - 1 ) +  x * x;
}

int main( )
{
    cout << "f(5) = " << f( 5 ) << endl;
    return 0;
}


/*
A function that is defined in terms of itself is called recursive.
The Fibonacci sequence is a classic example of recursion:

Need at least one base case; as well as a recursive call

Factorials:
1! = 1			       =1				     =1
2! = 2*1		       =2*1!				=2
3! = 3*2*1	   	   =3*2!				=6
4! = 4*3*2*1		   =4*3!				=24
5! = 5*4*3*2*1		 =5*4!				=120

 	                n! = n * (n-1)!
*/
