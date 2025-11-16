#include<bits/stdc++.h>
using namespace std;


struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
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
    vector<int> LLTraversal(ListNode *head) {
        vector<int>ans;
        ListNode * q = head;
        while(q){
            ans.push_back(q->val);
            q = q->next;
        }
        return ans;
    }
};