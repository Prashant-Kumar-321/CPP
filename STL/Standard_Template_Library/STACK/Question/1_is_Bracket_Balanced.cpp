#include <iostream>
#include <stack>
#include <unordered_map>
#include <string>

using namespace std;
bool isValidBracket(string);
unordered_map<char, int> Bracket = {{'(', -1}, {'[', -2}, {'{', -3}, {'}', 3}, {']', 2}, {')', 1}};

// Driver function
int main()
{
  string bracket;
  bracket = "((()))"; // valid
  bracket = "{( [ ]) }";
  // bracket = "{({})}(((" ; // No balanced brackets
  // bracket = "({({})}";
  cout << "Enter bracket string : " << endl;
  getline(cin, bracket);

  if (isValidBracket(bracket))
    cout << "Yes " << endl;
  else
    cout << "No" << endl;

  return 0;
}

// function defintion to check bracket is valid or not
bool isValidBracket(string str)
{
  stack<char> symbol;

  for (char ch : str) // Enhanced for loop
  {
    if (Bracket[ch] < 0) // opening bracket
      symbol.push(ch);

    else if (Bracket[ch] > 0) // closing bracket
    {
      if (!symbol.empty())
      {
        if (Bracket[ch] + Bracket[symbol.top()] != 0)
          return false;
        symbol.pop(); // bracket are matching
      }

      return false; // No corresponding open bracket
    }
  }

  if (!symbol.empty())
    return false;

  return true;
}