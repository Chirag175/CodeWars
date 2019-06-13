/*
Question:
Complete the function that takes two numbers as input, num and nth and return the nth digit of num (counting from right to left).

Note
If num is negative, ignore its sign and treat it as a positive value
If nth is not positive, return -1
Keep in mind that 42 = 00042. This means that findDigit(42, 5) would return 0
Examples
findDigit(5673, 4)     returns 5
findDigit(129, 2)      returns 2
findDigit(-2825, 3)    returns 8
findDigit(-456, 4)     returns 0
findDigit(0, 20)       returns 0
findDigit(65, 0)       returns -1
findDigit(24, -8)      returns -1
*/

//Solution:
int findDigit(int num, int nth)
{
    int ans=0;
    if(nth<=0)                  //To handle the "nth not positive" exception.
      return -1;
    if(num<0)                   //To ensure the output is positive irrespective of the input.
      num=-num;
    for(int i=0;i<nth;i++)      //Loops nth times to find the required digit.
    {
      ans=num%10;
      num/=10;                  //Fun Fact : This statement also helps in getting 0 as the output in conditions like (42,5) where 42 = 00042 and nth digit would be 0.
    }
    return ans;
}