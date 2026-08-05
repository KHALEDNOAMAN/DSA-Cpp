// Stack using Linked List
// Time: O(1) ops, Space: O(N)
struct Node { int data; Node* next; };
class Stack {
    Node* top;
public:
    Stack() { top = nullptr; }
    void push(int x) { Node* temp = new Node{x, top}; top = temp; }
};