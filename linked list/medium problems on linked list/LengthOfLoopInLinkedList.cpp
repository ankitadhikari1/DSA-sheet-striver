
#include<iostream>
using namespace std;



struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};


class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Loop detected, now count its length
                int count = 1;
                ListNode* temp = slow->next;
                while (temp != slow) {
                    temp = temp->next;
                    count++;
                }
                return count;
            }
        }
        return 0; // No loop
    }
};


