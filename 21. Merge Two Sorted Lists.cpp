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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp=new ListNode();
        ListNode *node=temp;
        while(list1&&list2){
            if(list1->val<=list2->val){
                ListNode *t=new ListNode(list1->val);
                temp->next=t;
                list1=list1->next;
            }
            else {
                ListNode *t=new ListNode(list2->val);
                temp->next=t;
                list2=list2->next;
            }
            temp=temp->next;
        }
        while(list1){
            ListNode *t=new ListNode(list1->val);
            temp->next=t;
            list1=list1->next;
            temp=temp->next;
        }
        while(list2){
            ListNode *t=new ListNode(list2->val);
            temp->next=t;
            list2=list2->next;
            temp=temp->next;
        }
        return node->next;
    }
};