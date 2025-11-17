
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
    void deleteGivenNode(ListNode* node) {
        ListNode * prevNode = NULL;
        ListNode * nextNode = NULL;
        prevNode = node->prev;
        if(node->next)nextNode = node->next;

        if(nextNode){
            nextNode->prev = prevNode;
        }

        prevNode->next = nextNode;
        delete node;

        
    }
};