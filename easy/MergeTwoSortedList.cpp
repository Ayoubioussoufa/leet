#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* sorted = &dummy;
        while (list1 && list2)
        {
            if (list2->val <= list1->val)
            {
                sorted->next = list2;
                list2 = list2->next;
            }
            else {
                sorted->next = list1;
                list1 = list1->next;
            }
            sorted = sorted->next;
        }
        if (list1)
            sorted->next = list1;
        else
            sorted->next = list2;
        return dummy.next;
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
    sec1->next = new ListNode(30);
    sec1->next->next = new ListNode(40);
    sec1->next->next->next = new ListNode(60);
    sec1->next->next->next->next = new ListNode(46);
    sec1->next->next->next->next->next = new ListNode(98);
    p = s.mergeTwoLists(node1, sec1);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
    cout << endl;
}

// mzyan ntfkr chwia linked list !!! 