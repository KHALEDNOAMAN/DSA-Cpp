// Doubly Linked List
// Time: O(N), Space: O(N)
struct Node {
    int data;
    Node* prev;
    Node* next;
    Node(int d) : data(d), prev(nullptr), next(nullptr) {}
};