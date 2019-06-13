/*
Question:
Complete the method which accepts an array of integers, and returns one of the following:

"yes, ascending" - if the numbers in the array are sorted in an ascending order
"yes, descending" - if the numbers in the array are sorted in a descending order
"no" - otherwise
You can assume the array will always be valid, and there will always be one correct answer.
*/

//Solution:
std::string is_sorted_and_how(std::vector<int> array)
{
  if(is_sorted(array.begin(),array.end()))  // Library function to check whether it is
    return "yes, ascending";                // sorted in Ascending Order.
  else                                      // If not, then a library function to reverse
    reverse(array.begin(),array.end());     // the vector in case of Descending order.
  if(is_sorted(array.begin(),array.end()))  // And then checking the reversed vector if
    return "yes, descending";               // it is in Ascending Order. If yes, then it
  return "no";                              // is in Descending Order otherwise Not Sorted.
}