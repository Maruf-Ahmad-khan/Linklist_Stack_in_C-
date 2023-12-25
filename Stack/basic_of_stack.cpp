#include <bits/stdc++.h>
using namespace std;
class Stack
{
private:
     int *arr;
     int top;
     // it shows total size in array
     int size;
     //   constructor
public:
     Stack(int size)
     {
          arr = new int[size];
          this->size = size;
          top = -1;
     }

     // Function
     void push(int data)
     {
          if (size - top > 1)
          {
               // space available
               // insert
               top++;
               arr[top] = data;
          }
          else
          {
               // space not available
               cout << "Stack Overflow" << endl;
          }
     }

     void pop()
     {
          if (top == -1)
          {
               // stack is empty
               cout << "Stack underflow, can not delete element " << endl;
          }
          else
          {
               // stack is not empty
               top--;
          }
     }

     int getTop()
     {
          if (top == -1)
          {
               cout << "There is not element in Stack" << endl;
          }
          else
          {
               return arr[top];
          }
     }
     int getsize()
     {
          return top + 1;
     }

     bool isEmpty()
     {
          if (top == -1)
          {
               return true;
          }
          else
          {
               return false;
          }
     }
};

int main()
{
     // creation of stack
     Stack s(10);

     // insertion
     s.push(10);
     s.push(20);
     s.push(40);

     while (!s.isEmpty())
     {
          cout << s.getTop() << " ";
          s.pop();
     }
     cout << "Size of stack" << s.getsize() << endl;
     return 0;
}