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
    ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
        if(head->val == X){
            return head->next;
        }

        ListNode * curr = head;
        ListNode * prev = NULL;
        while(curr!=NULL){
            if(curr->val == X){
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        if(!curr)return head;
        prev->next = curr->next;
        return head;
    }
};