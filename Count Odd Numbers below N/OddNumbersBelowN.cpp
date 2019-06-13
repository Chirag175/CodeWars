/*
Question:
Given a number n, return the number of positive odd numbers below n, EASY!
oddCount(7) //=> 3, i.e [1, 3, 5]
oddCount(15) //=> 7, i.e [1, 3, 5, 7, 9, 11, 13]
Expect large Inputs!
*/

//Solution:
int odd_count(int n){
  if(n%2==0)            // Simply Put, odd and even numbers keep alternating.
    return n/2;         // So, if n is even, odd integers would appear half of n times.
  else                  // And if n is odd, then odd integers would appear half of
    return (n-1)/2;     // 1 less than n times. Eg : n=6, odd=3 & n=7, odd=3.
}