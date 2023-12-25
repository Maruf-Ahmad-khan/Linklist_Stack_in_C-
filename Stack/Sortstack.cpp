#include <bits/stdc++.h>
using namespace std;
void insertSorted(stack<int> &s, int target)
{
     // base case
     if (s.empty())
     {
          s.push(target);
          return;
     }
     // base case
     if (s.top() >= target)
     {
          s.push(target);
          return;
     }
     int topElement = s.top();
     s.pop();
     insertSorted(s, target);
     s.push(topElement);
}
void Sortstack(stack<int> &s)
{
     // base case
     if (s.empty())
     {
          return;
     }
     int topElement = s.top();
     s.pop();
     Sortstack(s);
     insertSorted(s, topElement);
}
int main()
{
     stack<int> s;
     s.push(10);
     s.push(50);
     s.push(1);
     s.push(2);
     s.push(5);
     s.push(7);
     Sortstack(s);
     cout << "Printing sorted stack:" << endl;
     while (!s.empty())
     {
          cout << s.top() << " ";
          s.pop();
     }
     cout << endl;
     return 0;
}