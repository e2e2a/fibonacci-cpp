#include <iostream>
using namespace std;

int fibonacci(int abdc){
  int first = 0, second = 1;
  
    for (int i = 2; i <= abdc; ++i) {
      /**
       * adding the two variable first before we change the value of the two variable
       */
        int next = first + second;
        first = second;
        second = next;
    }

    return first;
}

int main()
{
  int x;
  cout << "Enter a number between 1 and 50: ";
  cin >> x;

  if (x > 0 && x <= 50)
  {
    cout << fibonacci(x);
  }
  else
  {
    cout << "the number must be a non-negative";
  }
  return 0;
}