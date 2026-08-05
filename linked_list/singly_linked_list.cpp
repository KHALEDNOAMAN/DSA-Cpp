// Singly Linked List
// Time: Insert O(1)/O(N), Space: O(N)
struct Node {
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};