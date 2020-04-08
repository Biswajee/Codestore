/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp->next!=NULL) { temp=temp->next; count++; }
        int mid = ceil((double)count/2.0);
        while(mid--) {
            head=head->next;
        }
        return head;
    }
};