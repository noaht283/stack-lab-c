#ifndef POSTFIX_H
#define POSTFIX_H
#include <stack>
#include <iostream>

using namespace std;
class postfix{
 public:
  postfix();
  void add();
  void sub();
  void mult();
  void divide();
  void negate();
  stack<int> stk;
};
#endif
