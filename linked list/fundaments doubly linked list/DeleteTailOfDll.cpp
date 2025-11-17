
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
    ListNode* deleteTail(ListNode* head) {
        if(!head || !head->next)return NULL;
        ListNode * curr = head;
        ListNode * prev = NULL;
        while(curr->next){
            prev = curr;
            curr = curr->next;
        }

        curr->prev = NULL;
        prev->next = NULL;
        delete(curr);
        return head;

    }
};