#include <iostream>
using namespace std;

int main() {
  int num1, num2;

  cout << "Please enter an integer\n";
  cin >> num1;
  cout << "Enter another integer\n";
  cin >> num2;

  if (num1 > num2) 
    cout << num1 << " is bigger.\n"; // This happens when num1 is greater than num2
  else if (num1 < num2)
    cout << num2 << " is bigger.\n"; // This happens when num2 is greater than num1
  else
    cout << "The numbers are the same.\n";

    // Why we don't need na clause for the trailing else
    // We don't need a trailing clause becuase if none of the statements are true we get the output the numbers are the same which is true. Since if num1 isn't greater and less than num2 than its the same which is why put else and not else if.
    
}