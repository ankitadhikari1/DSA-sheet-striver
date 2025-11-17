
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
    ListNode* insertBeforeTail(ListNode* head, int X) {
        ListNode * newNode = new ListNode(X);
        if(!head)return newNode;
        if(!head->next){
            head->prev = newNode;
            newNode->next = head;
            return newNode;
        }
        ListNode * curr = head;
        while(curr->next){
            curr = curr->next;
        }
        ListNode * prevNode = curr->prev;
        curr->prev = newNode;
        newNode->next = curr;
        newNode->prev = prevNode;
        prevNode->next = newNode;

        return head;
    }
};