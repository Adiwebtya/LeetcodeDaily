/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* prev1 = nullptr;

    Node* flatten(Node* head) {
        if (!head) return nullptr;

        flatten(head->next);
        flatten(head->child);

        head->next = prev1;
        if (prev1) prev1->prev = head;

        head->child = nullptr;
        prev1 = head;

        return head;
    }
};
