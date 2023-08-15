#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* current = head;
        ListNode dummyy(0);
        ListNode* plop = &dummyy;
        ListNode dummy(0);
        ListNode* final = &dummy;
        while (current)
        {
            if (current->val < x)
            {
                final->next = current;
                final = final->next;
            }
            else
            {
                plop->next = current;
                plop = plop->next;
            }
            current = current->next;
        }
        final->next = dummyy.next;
        plop->next = nullptr;
        return dummy.next;
    }
};

int main()
{
    Solution s;
    ListNode *p;
    ListNode* node1 = new ListNode(1);
    node1->next = new ListNode(4);
    node1->next->next = new ListNode(3);
    node1->next->next->next = new ListNode(2);
    node1->next->next->next->next = new ListNode(5);
    node1->next->next->next->next->next = new ListNode(2);

    p = s.partition(node1, 3);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
    cout << endl;
}