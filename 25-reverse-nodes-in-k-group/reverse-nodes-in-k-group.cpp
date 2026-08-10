class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;

        // Check whether k nodes are available
        int cnt = 0;

        while(temp != NULL && cnt < k) {
            temp = temp->next;
            cnt++;
        }

        // Less than k nodes
        if(cnt < k)
            return head;

        // Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;

        for(int i = 0; i < k; i++) {
            ListNode* front = curr->next;

            curr->next = prev;
            prev = curr;
            curr = front;
        }

        // head is now the last node of reversed group
        head->next = reverseKGroup(curr, k);

        return prev;
    }
};