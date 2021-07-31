#include "postfix.h"
#include <stack>
#include <iostream>

using namespace std;

postfix::postfix() {
  stack<int> stk;                ;
}

void postfix ::add(){
  int x = stk.top();
  stk.pop();
  int y = stk.top();
  stk.pop();
  int z = x+y;
  stk.push(z);
}

void postfix ::sub(){
  int x = stk.top();
  stk.pop();
  int y = stk.top();
  stk.pop();
  int z = x-y;
  stk.push(z);
}

void postfix:: mult(){
  int x = stk.top();
  stk.pop();
  int y = stk.top();
  stk.pop();
  int z = x*y;
  stk.push(z);
}

void postfix:: divide(){
  int x = stk.top();
  stk.pop();
  int y = stk.top();
  stk.pop();
  int z = x/y;
  stk.push(z);
}

void postfix:: negate(){
  int x = stk.top();
  stk.pop();
  x=-x;
  stk.push(x);
}

