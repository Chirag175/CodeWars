/*
Question:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Finish the solution so that it returns the sum of all the multiples of 3 or 5 below the number passed in.
Note: If the number is a multiple of both 3 and 5, only count it once.
Courtesy of ProjectEuler.net
*/

//Solution:
int solution(int number) 
{
  int i=3,sum=0;   // Initializing sum as zero and i as 3 as there are no multiples of 3 or 5 below that. So, we save very little execution time here.
  while(i<number)  // A while loop that proceeds from 0 to 1 less than the given number.
  {
    if(i%3==0)     // If the number is divisble by 3, then add it to sum.
      sum+=i;
    else           // If the number isn't divisble by 3, then check another condition.
    if(i%5==0)     // If the number is divisble by 5, then add it to sum. 
      sum+=i;      // The else between the two if's ensure that a common multiple isn't added twice!
    i++;           // For increasing the counter.
  }
  return sum;      // Returns the summation of all the multiples of 3 and 5 under the give number.
}