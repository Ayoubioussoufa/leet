#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *node;
        while (a)
        {
            ListNode *b = headB;
            while (b)
            {
                if (a == b)
                {
                    return a;
                }
                b = b->next;
            }
            a = a->next;
        }
        return nullptr;
    }
};

int main()
{
    Solution s;
    ListNode *p;
    ListNode* node1 = new ListNode(1);
    node1->next = new ListNode(2);
    node1->next->next = new ListNode(3);

    ListNode* sec1 = new ListNode(10);
    sec1->next = node1->next;
    sec1->next->next =  node1->next->next;
    // while (node1 != nullptr)
    // {
    //     cout << node1->val << endl;
    //     cout << &node1->val << endl;
    //     node1 = node1->next;
    // }
    // cout << endl;
    // while (sec1 != nullptr)
    // {
    //     cout << sec1->val << endl;
    //     cout << &sec1->val << endl;
    //     sec1 = sec1->next;
    // }
    // cout << endl;
    // sec1->next->next->next = new ListNode(60);
    // sec1->next->next->next->next = new ListNode(46);
    // sec1->next->next->next->next->next = new ListNode(98);
    p = s.getIntersectionNode(node1, sec1);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
    cout << endl;
}