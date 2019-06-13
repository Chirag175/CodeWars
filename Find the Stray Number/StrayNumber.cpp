/*
Question:
You are given an odd-length array of integers, in which all of them are the same, except for one single number.
Complete the method which accepts such an array, and returns that single different number.
The input array will always be valid! (odd-length >= 3)

Examples
[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3
*/

//Solution:
int stray(std::vector<int> numbers) 
{
    if(numbers[0]!=numbers[1])      //To check the first and second value of the vector.
      if(numbers[1]!=numbers[2])    //If found different, then check the second and third value of the vector.
        return numbers[1];          //If found different, then the second value must be stray
      else                          //as it was different from the first as well as the third value where only one value can be different.
        return numbers[0];          //If same, then the first value is the stray value as there is only one different value in the vector.
    else                            //If the first and second values were same, those can be considered as the normal i.e., non-stray values.
    {
      int i=0,normal=numbers[0];
      while(i<numbers.size())       //Going through the vector, checking against the normal value determined,
      {
        if(numbers[i]!=normal)
          return numbers[i];        //the stray value if present would be returned.
        i++;
      }                             //Otherwise, a message would be printed stating the proven fact.
      std::cout<<"No Stray Values found!";
      return 0;
    }
}