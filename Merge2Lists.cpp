 //#######################################################Merge Two sorted Linked Lists#######################################################

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
 
 
 
 
 ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
       ListNode* finalList = NULL;
        if(l1 == NULL)
            return l2;
        else if(l2 == NULL)
            return l1;
        
        if(l1->val <= l2->val)
        {
            finalList = l1;
            finalList->next = mergeTwoLists(l1->next, l2);
        }
        else 
        {
            finalList = l2;
            finalList->next = mergeTwoLists(l1, l2->next);
        }
        return finalList;
        
       
    }