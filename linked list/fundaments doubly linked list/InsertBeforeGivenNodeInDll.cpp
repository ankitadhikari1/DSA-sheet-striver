
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
    void insertBeforeGivenNode(ListNode* node, int X) {
        ListNode * newNode = new ListNode(X);

        ListNode * prevNode = node->prev;
        newNode->next = node;
        node->prev = newNode;
        newNode->prev = prevNode;
        prevNode->next = newNode;

    }
};