#include <iostream>
#include "../header_files/Calculator.h"

using namespace std;

int main() {
  double x = 0.0;
  double y = 0.0;
  double result = 0.0;
  char oper = '+';

  cout << "Calculator Console Application" << endl << endl;
  cout << "Please enter the operation to perform. Format a+b | a-b | a*b | a/b"
       << endl;

  Calculator c;
  while (true) {
    cin >> x >> oper >> y;
    result = c.Calculate(x, oper, y);
    cout << "Result: " << result << endl;
  }

  return 0;
}
