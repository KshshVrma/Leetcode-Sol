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
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==n){
       head=head->next;
            
        }
        else if(n==1){
            ListNode*useless=head;
            ListNode*slow=head;
            while(useless->next!=NULL){
                slow=useless;
                useless=useless->next;
                
            }
            slow->next=NULL;
        }
        else{
        int ans=count-n;ListNode*ptr=head;
        for(int i=0;i<ans;i++){
            ptr=ptr->next;
        }
        ptr->val=ptr->next->val;
        ptr->next=ptr->next->next;}
        return head;
        
//         ListNode*fast=head;
//         ListNode*slow=head;
//         for(int i=0;i<n;i++){
//             fast=fast->next;
//         }
//         while(fast!=NULL){
//             slow=slow->next;
//             fast=fast->next;
            
//         }
//     if(slow->next!=NULL){
//         slow->val=slow->next->val;
//         slow->next=slow->next->next;
//     }
//         else if(slow->next==NULL||slow==NULL){
//             return NULL;
//         }
    
    return head;}
    

};