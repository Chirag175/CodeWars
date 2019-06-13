/*
Question: The rgb() method is incomplete. Complete the method so that passing in RGB decimal values will result in a hexadecimal representation being returned. The valid decimal values for RGB are 0 - 255. Any (r,g,b) argument values that fall out of that range should be rounded to the closest valid value.

The following are examples of expected output values:

rgb(255, 255, 255) # returns FFFFFF
rgb(255, 255, 300) # returns FFFFFF
rgb(0,0,0) # returns 000000
rgb(148, 0, 211) # returns 9400D3
*/

//Solution:
using namespace std;

class RGBToHex                                                                      // RGB values are basically composed of individual decimal values of Red(r),
{                                                                                   // Green(g) and Blue(b) colors. And Hexadecimal representation of colors, as
  int r,g,b;                                                                        // the name suggests are the same as their RGB values but instead, are
  public:                                                                           // represented in hexadecimal form stringed together.
  RGBToHex(int,int,int);                                                            // So, all we need is a function to convert those individual decimal values
  static string rgb(int r, int g, int b);                                           // to hexadecimal form and then string them together.
};

string dectohex(int x)                                                              // To prevent the hassle of writing these statements thrice for r,g and b,
{                                                                                   // I created a function 'dectohex(int)' dedicated to converting decimal values
  if(x<0) x=0;  if(x>255)  x=255;  int org=x;  string ans="";                       // to hexadecimal values and returning those substrings to the main 'rgb()'
  char hex[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; // function where they are stringed together and returned as the final answer.
  if(x<16)  ans+='0';  if(x==0)  return ans+='0';                                   
  while(x!=0)                                                                       // The initial if's take care of rounding out of bound values to nearest valid
  {                                                                                 // ones. The character array, hex has all the values that a hexadecimal value
    ans+=hex[x%16];                                                                 // can be. So, using a while loop, we implement the method as stated on the given
    x/=16;                                                                          // website : https://www.rapidtables.com/convert/number/decimal-to-hex.html
  }                                                                                 // Ensuring that values that are single i.e., 00 to 0F do not get reversed along
  if(org<16)  return ans;                                                           // with the other ones, this 'if' takes care of keeping it unchanged.
  else                                                                              // And the rest of the values get reversed as per the method referred from above.
  {
    reverse(ans.begin(),ans.end());
    return ans;                                                                     // Finally, the two character string, ans is returned to the place where it was
  }                                                                                 // called.
}

string RGBToHex::rgb(int r, int g, int b){                                          // Here, this function which is called primarily strings together the individual
  return dectohex(r)+dectohex(g)+dectohex(b);                                       // hexadecimal values obtained from the 'dectohex(int)' function and returns the
}                                                                                   // final hexadecimal conversion of the given rgb value.