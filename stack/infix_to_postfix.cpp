// Infix to Postfix
// Time: O(N), Space: O(N)
#include <string>
#include <stack>
using namespace std;
int prec(char c) { if(c=='^') return 3; if(c=='/'||c=='*') return 2; if(c=='+'||c=='-') return 1; return -1; }