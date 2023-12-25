#include<bits/stdc++.h>
// Reverse the string
using namespace std;
int main()
{
     string str = "maruf";
     stack<char> st;
     for(int i = 0; i < str.length(); i ++)
     {
          st.push(str[i]);
     }
     while(!st.empty())
     {
          cout<<st.top()<<" ";
          st.pop();
     }
     cout<<endl;
     return 0;
}