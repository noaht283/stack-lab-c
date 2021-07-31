#include "postfix.h"
#include <stack>
#include <iostream>


using namespace std;

int main() {
  postfix p;
  p.stk.push(4);
  p.stk.push(5);
  p.stk.push(7);
  p.stk.push(2);
  p.add();
  p.sub();
  p.mult();

  cout << "Result is: " << p.stk.top() << endl;
  return 0;
}
