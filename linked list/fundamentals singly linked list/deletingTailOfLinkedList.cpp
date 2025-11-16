#include<bits/stdc++.h>
using namespace std;



struct ListNode
{
    int val;
    ListNode *next;
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
    ListNode* deleteTail(ListNode* &head) {
        if(!head || head->next == NULL){
            return NULL;
        }
        ListNode * q = head;
        while(q->next->next){
            q = q->next;
        }

        q->next = NULL;
        return head;
    }
};
