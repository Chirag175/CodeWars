/*
Question:
Task
Given two cells on the standard chess board, determine whether they have the same color or not.

Example
For cell1 = "A1" and cell2 = "C3", the output should be true.
For cell1 = "A1" and cell2 = "H3", the output should be false.

Input/Output
[input] string cell1
[input] string cell2
[output] a boolean value

true if both cells have the same color, false otherwise.
*/

//Solution:
bool chessBoardCellColor(std::string cell1, std::string cell2) {
  int val1,val2;
  val1=cell1[0]+cell1[1];        //Adds the value of individual characters of cell1
  val2=cell2[0]+cell2[1];        //Adds the value of individual characters of cell2
  if((val1+val2)%2==0)           //If the summation is even, then they are same as
    return true;                 //then, both the values of cells that are added are
  else                           //even or odd, basically the same color. If it is odd,
    return false;                //then the cells are of different colors.
} 

/*    IN-DEPTH EXPLANATION
For eg.: If cell1 = "A1" (black) and cell2 = "C3" (black), then val1=113(A)+1(1)=114 and val2=115(C)+3(3)=118.
If we add those values, we get 232 which is completely divisble by 2. So, they are of same colors. But for another
eg.: If cell1 = "A1" (black) and cell2 = "H3" (white), then val1=113(A)+1(1)=114 and val2=120(C)+3(3)=123.
If we add those values, we get 237 which is not divisble by 2. So, they are of different colors.
Note that black cells would always have an even value and white cells would always have an odd value.
*/