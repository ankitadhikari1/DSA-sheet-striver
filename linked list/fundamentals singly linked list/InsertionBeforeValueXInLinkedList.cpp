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
    ListNode* insertBeforeX(ListNode* &head, int X, int val) {
        ListNode * temp = new ListNode(val);
        if(head->val == X){
            temp->next = head;
            head = temp;
            return head;
        }

        ListNode * curr = head;
        ListNode * prev = NULL;
        while(curr!=NULL){
            if(curr->val == X){
                temp->next = prev->next;
                prev->next = temp;
                return head;
            }
            prev = curr;
            curr = curr->next;
        }

        return head;

    }
};
