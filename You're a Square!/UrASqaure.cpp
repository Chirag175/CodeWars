/*
Question:
A square of squares
You like building blocks. You especially like building blocks that are squares. And what you even like more, is to arrange them into a square of square building blocks!
However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're currently working in vain… Wait! That's it! You just have to check if your number of building blocks is a perfect square.

Task
Given an integral number, determine if it's a square number:

In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.
The tests will always use some integral number, so don't worry about that in dynamic typed languages.

Examples
is_square (-1) # => false
is_square   0 # => true
is_square   3 # => false
is_square   4 # => true
is_square  25 # => true
is_square  26 # => false
isSquare(-1) returns  false
isSquare(0) returns   true
isSquare(3) returns   false
isSquare(4) returns   true
isSquare(25) returns  true  
isSquare(26) returns  false
*/

//Solution:
#include <math.h>        //Need to include this header file for the power function -> pow(value,power);
bool is_square(int n)
{
  float x=pow(n,0.5);    //Get the square root of the integer including the digits after the decimal (because it's stored in a float variable).
  int y=pow(n,0.5);      //Get the square root of the integer discarding the digits after the decimal (because it's stored in an int variable). 
  if(x==y)               //Check whether the square roots are equal. 
    return true;         //If yes, even after the decimal point (which would be 0s), then the integer is a perfect square.
  else
    return false;        //If not, then the integer isn't a perfect square as square roots of perfect squares are integers themselves and hence, do not contain digits after the decimal.
}