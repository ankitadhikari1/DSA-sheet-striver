
#include<bits/stdc++.h>
using namespace std;



class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int value) : val(value), next(nullptr) {}

    ~ListNode() {
        delete next;
    }
};



class Solution {
public:
    bool searchKey(ListNode* head, int key) {
        ListNode * q = head;
        while(q){
            if(q->val == key){
                return true;
            }
            q=q->next;
        }
        return false;
    }
};