//Runtime: 28 ms, faster than 79.11% of C++ online submissions for Add Two Numbers.
//Memory Usage: 70.1 MB, less than 5.14% of C++ online submissions for Add Two Numbers.

#include <iostream>
#include <cstdlib>
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
        ListNode out(0), *tail = &out;
        for (div_t sum{0,0}; sum.quot||l1||l2; tail = tail->next)
        {
            if (l1) { sum.quot += l1->val; l1 = l1->next; }
            if (l2) { sum.quot += l2->val; l2 = l2->next; }
            sum = div(sum.quot, 10);
            tail->next = new ListNode(sum.rem);
        }
        return out.next;

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
