#include <bits/stdc++.h>
using namespace std;
// valid parentheses leet code
bool isValid(string s)
{
     stack<char> st;
     for (int i = 0; i < s.size(); i++)
     {
          char ch = s[i];
          if (ch == '(' || ch == '{' || ch == '[')
          {
               st.push(ch);
          }
          else
          {
               if (!st.empty())
               {
                    char topChar = st.top();
                    if (ch == ')' && topChar == '(')
                    {
                         st.pop();
                    }
                    else if (ch == '}' && topChar == '{')
                    {
                         st.pop();
                    }
                    else if (ch == ']' && topChar == '[')
                    {
                         st.pop();
                    }
                    else
                    {
                         return false;
                    }
               }
               else
               {
                    return false;
               }
          }
     }
     if (st.empty())
     {
          return true;
     }
     else
     {
          return false;
     }
}

int main()
{
     string s = "()";
     cout << "The parenthesis is valid: " << isValid(s) << endl;
     return 0;
}