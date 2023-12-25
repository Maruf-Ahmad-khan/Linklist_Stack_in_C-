#include<bits/stdc++.h>
using namespace std;
void printmiddle(stack<int>&s, int &totalsize)
{
     // to handle the empty case
     if(s.size()==0)
     {
     cout<<"Ther is no element in stack:"<<endl;
     return ;
     }
     // base case
     if(s.size() == totalsize/2 + 1)
     {
          cout<<"Middle element is:"<<s.top()<<endl;
          return;
     }
     int temp = s.top();
     s.pop();
     // recursive call
     printmiddle(s, totalsize);
     // backtrack
     s.push(temp);
}
int main()
{
     stack<int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.push(100);
     s.push(120);
     int totalsize = s.size();
     printmiddle(s, totalsize);
     return 0;
}