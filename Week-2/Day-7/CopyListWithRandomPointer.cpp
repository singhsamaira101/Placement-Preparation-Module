/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL)
            return head;
        
        Node *original = head;

        while(original != NULL)
        {
            Node *next = original->next;
            Node *duplicate = new Node(original->val);
            duplicate->next = next;
            original->next = duplicate;
            original = next;
        }
        original = head;
        while(original != NULL)
        {
            Node *next = original->next->next;
            if(original->random != NULL)
                original->next->random = original->random->next;
            else
                original->next->random = NULL;
            original = next;
        }
        Node *copyHead = head->next;
        original = head;
        while(original != NULL)
        {
            Node *next = original->next->next;
            if(next != NULL)
                original->next->next = next->next;
            original->next = next;
            original = next;
        }
        return copyHead;
    }
};