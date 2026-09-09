/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        if(temp1 -> next == NULL)return NULL;
        for(int i = 0;i < n;i ++){
            if(temp1 -> next == NULL)return head -> next;
            temp1 = temp1 -> next;
        }
        while(temp1->next){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        temp2 -> next = temp2-> next -> next;
        return head;
    }
};