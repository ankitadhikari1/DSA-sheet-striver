
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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int k) {
        ListNode * newNode = new ListNode(X);
        if(!head)return newNode;
        if(k==1){
            head->prev = newNode;
            newNode->next = head;
            return newNode;
        }
        ListNode * curr = head;
        for(int i=0;i<k-1 && curr ;i++){
            curr = curr->next;
        }
        if(!curr)return head;
        ListNode * prevNode = curr->prev;
        newNode->next = curr;
        newNode->prev = prevNode;
        curr->prev = newNode;
        prevNode->next = newNode;

        return head;
    }
};