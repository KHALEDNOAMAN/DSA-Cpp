// Stack using Array
// Time: O(1) ops, Space: O(N)
class Stack {
    int top; int arr[1000];
public:
    Stack() { top = -1; }
    void push(int x) { arr[++top] = x; }
    int pop() { return arr[top--]; }
};