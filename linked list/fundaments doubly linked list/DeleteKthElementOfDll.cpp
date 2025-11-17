
#include<bits/stdc++.h>
using namespace std;




struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};


class Solution {
public:
    ListNode* deleteKthElement(ListNode* head, int k) {
        if (!head || k <= 0) return head; 

        ListNode* curr = head;

        if (k == 1) {
            head = head->next;
            if (head) head->prev = NULL; // update new head’s prev
            delete curr; // delete old head
            return head;
        }

        // Traverse to kth node
        for (int i = 1; i < k && curr; i++) {
            curr = curr->next;
        }

        if (!curr) return head; // k > length

        // Case 2: delete middle or last node
        ListNode* prevNode = curr->prev;
        ListNode* nextNode = curr->next;

        if (prevNode) prevNode->next = nextNode;
        if (nextNode) nextNode->prev = prevNode;

        delete curr;
        return head;
    }
};
