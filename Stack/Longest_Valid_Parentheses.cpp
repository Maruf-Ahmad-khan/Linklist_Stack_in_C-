#include <bits/stdc++.h>
// Hard question on leet code
using namespace std;
int longestValidParentheses(string s)
{
     stack<int> st;
     st.push(-1);
     int maxlen = 0;
     for (int i = 0; i < s.length(); i++)
     {
          char ch = s[i];
          if (ch == '(')
          {
               st.push(i);
          }
          else
          {
               st.pop();
               if (st.empty())
               {
                    st.push(i);
               }
               else
               {
                    int len = i - st.top();
                    maxlen = max(len, maxlen);
               }
          }
     }
     return maxlen;
}

int main()
{
     string s = ")()())";
     cout << "The expected outcomes will be :" << longestValidParentheses(s)<<endl;;
     return 0;
}