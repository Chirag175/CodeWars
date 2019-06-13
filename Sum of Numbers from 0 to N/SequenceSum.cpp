/*
Question:
Description:
We want to generate a function that computes the series starting from 0 and ending until the given number following the sequence:
0 1 3 6 10 15 21 28 36 45 55 ....
which is created by
0, 0+1, 0+1+2, 0+1+2+3, 0+1+2+3+4, 0+1+2+3+4+5, 0+1+2+3+4+5+6, 0+1+2+3+4+5+6+7 etc..

Input:
LastNumber
Output:
series and result

Example:
Input:
> 6
Output:
0+1+2+3+4+5+6 = 21

Input:
> -15
Output:
-15<0

Input:
> 0
Output:
0=0
*/

//Solution:
#include <string>
using namespace std;

class SequenceSum{                        // Each class object has an integer count which would be updated during the call of it's constructor via integer c.
  int count;
  public:
  SequenceSum (int);                      // Constructor.
  string showSequence();                  // Function to show the entire sequence upto count along with the output.
};

string SequenceSum::showSequence(){
    string seq="";                        // Initializing string seq as null.
    if(count==0)                          // To take care of zero values of count.
      return "0=0";
    if(count<0)                           // To take care of negative values of count.
    {
      seq=to_string(count);               // The to_string(int) function helps convert an integer to string.
      seq+="<0";                          
      return seq;
    }
    int i,val=0;
    for(i=0;i<=count;i++)
    {
      val+=i;                             // The integer val keeps track of the output.
      seq+=to_string(i);                  // The string seq keeps track of the sequence.
      seq+="+";
    }
    seq.pop_back();                       // To remove the last '+' character from the string.
    seq+=" = ";                       
    seq+=to_string(val);                  // Attaching the output to the sequence.
    return seq;                           // Returning our final string.
}

SequenceSum::SequenceSum (int c) {
  count = c;                              // Constructor Function that updates count from the parent class.
}