#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str = "marufkhan";
     stack<char> ch;
     for(int i = 0 ; i < str.length(); i ++)
     {
          ch.push(str[i]);
     }
     while(!ch.empty())
     {
          cout<<ch.top()<<" ";
          ch.pop();
     }
     cout<<endl;
     return 0;
}