//Runtime: 32 ms, faster than 43.93% of C++ online submissions for Add Two Numbers.
//Memory Usage: 9.4 MB, less than 100.00% of C++ online submissions for Add Two Numbers.

#include<iostream>
using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* here1 = l1;
        ListNode* here2 = l2;
        ListNode* out = new ListNode(0);
        ListNode* out_here = out;
        int carry = 0;

        //head node
        int tempval = here1->val + here2->val + carry;
        out_here->val = tempval%10;
        carry = (tempval - tempval%10)/10;
        here1 = here1->next;
        here2 = here2->next;

        while ((here1!=NULL)&&(here2!=NULL))
        {
            int tempval = here1->val + here2->val + carry;
            out_here->next = new ListNode(tempval%10);
            out_here = out_here->next;
            carry = (tempval - tempval%10)/10;
            here1 = here1->next;
            here2 = here2->next;
        }

        if ((here1==NULL)&&(here2==NULL))
        {
            if (carry == 1)
            {
                out_here->next = new ListNode(1);
                out_here = out_here->next;
            }
        }
        else if (here1==NULL)
        {
            while(here2 != NULL)
            {
                int tempval = here2->val + carry;
                out_here->next = new ListNode(tempval%10);
                out_here = out_here->next;
                carry = (tempval - tempval%10)/10;
                here2 = here2->next;
            }
            if (carry == 1) out_here->next = new ListNode(1);
        }
        else
        {
            while(here1 != NULL)
            {
                int tempval = here1->val + carry;
                out_here->next = new ListNode(tempval%10);
                out_here = out_here->next;
                carry = (tempval - tempval%10)/10;
                here1 = here1->next;
            }
            if (carry == 1) out_here->next = new ListNode(1);
        }
        return out;
    }
};

int main()
{
    ListNode* l1 = new ListNode(1);
    l1->next = new ListNode(5);
    l1->next->next = new ListNode(9);
    ListNode* l2 = new ListNode(1);
    l2->next = new ListNode(5);
    ListNode* here = l1;

    Solution sol;
    ListNode* out = sol.addTwoNumbers(l1,l2);
    here = out;
    while(here != NULL)
    {
        cout<<here->val<<" ";
        here = here->next;
    }

    return 0;
}
