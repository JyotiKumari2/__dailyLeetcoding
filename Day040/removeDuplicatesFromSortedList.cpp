class Solution {
public:

ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp =head;
    
    while(temp!=NULL)
    {
        
		// for removing duplicate list
		
        while(temp->next!=NULL && temp->val==temp->next->val)
        {
            temp->next=temp->next->next;
        }
        
       
	   // this is for jump to non-duplicate list 
	   
        temp=temp->next;         
    }
   
    return head;
}
};