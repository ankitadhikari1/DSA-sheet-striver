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
    ListNode* insertAtTail(ListNode* &head, int X) {
        
        ListNode * curr = head;
        ListNode * temp = new ListNode(X);
        if(!head)return temp;
        while(curr->next){
            curr = curr->next;
        }

        curr->next = temp;
        return head;
    }
};