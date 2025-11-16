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
    ListNode* deleteKthNode(ListNode* &head, int k) {
        if(!head)return NULL;
        if(k==1){
            return head->next;
        }
        ListNode * q = head;
        for(int i=0;i<k-2;i++){
            q=q->next;
        }
        q->next = q->next->next;
        return head;
    }
};