/*
Question: There is a bus moving in the city, and it takes and drop some people in each bus stop.
You are provided with a list (or array) of integer arrays (or tuples). Each integer array has two items which represent number of people get into bus (The first item) and number of people get off the bus (The second item) in a bus stop.
Your task is to return number of people who are still in the bus after the last bus station (after the last array).
*/

//Solution:
unsigned int number(const std::vector<std::pair<int, int>>& busStops)                                  
{                                                                      
  unsigned int pass=0;                                                   // Initializing 'pass'; to count the number of passengers.
  for(int i=0; i<busStops.size(); i++)                                   // The statements within this 'for' loop execute until the entire vector 'busStops' is cycled through.
  {                                                                      // First, there is an increment in the number of passengers as they enter the bus,
    pass+=busStops[i].first;                                             // and then there is a decrement in the number of passegers as they exit the bus at every bus stop.
    pass-=busStops[i].second;                                            // Hence, the first and second element of the vector pairs are added and subtracted respectively
  }                                                                      // and as the vector is completely cycled through, the loop is terminated.
  return pass;                                                           // What remains is the total amount of passengers in the bus at the last stop (after the passengers
}                                                                        // that had to leave, have left) which is returned as the final answer.