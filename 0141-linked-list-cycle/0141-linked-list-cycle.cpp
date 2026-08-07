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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head , *fast=head;
        while(fast !=nullptr && fast->next!=nullptr){ //fast has not run end of list and also
            slow =slow->next;                        // node next to fast is thr so next next
            fast =fast->next->next;                    //doesnt crash
            if(slow==fast)return true;
        }
        return false;
    }
};
/*same as finding duplicate number but with linkedlist and we just use cycle confimation here*/ 