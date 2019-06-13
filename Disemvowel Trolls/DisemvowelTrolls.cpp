/*
Question:
Trolls are attacking your comment section!
A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.
Your task is to write a function that takes a string and return a new string with all vowels removed.
For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".
Note: for this kata y isn't considered a vowel.
*/

//Solution:
# include <string>
std::string disemvowel(std::string str)    //function to remove vowels from given string.
{
    int x=0,y=0;              //initializing two variables.
    char ans[501]="";         //initializing an array of characters aka string to null. 
                              //Otherwise errors could be found in the futher execution
                              //of the program due to garbage value stored in previously
                              //allocated memory spaces pertaining to this string.
    while(str[x]!='\0')       //loop to go through the entire string.
    {
                              //if statement checks for vowels.
      if(str[x]!='a'&&str[x]!='e'&&str[x]!='i'&&str[x]!='o'&&str[x]!='u'&&str[x]!='A'&&str[x]!='E'&&str[x]!='I'&&str[x]!='O'&&str[x]!='U')
      {
        ans[y]=str[x];        //only copies non-vowel characters.
        y++;
      }
      x++;
    }
    return ans;               //final answer is returned in the form of a string.
}