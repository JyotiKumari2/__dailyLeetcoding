class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        if(head->val == val) return removeElements(head->next, val);
        ListNode* crawl = head;
        
        while(crawl && crawl->next){
            if(crawl->next->val == val){
                crawl->next = crawl->next->next;
            } else crawl = crawl->next;
        }
        
        return head;
    }
};