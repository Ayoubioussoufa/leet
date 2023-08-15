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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* current = head;
        while (current->next) {
            if (current->val == current->next->val)
                current->next = current->next->next;
            else
                current = current->next;
        }
        return head;
    }
};

int main()
{
    Solution s;
    ListNode *p;
    ListNode* node1 = new ListNode(1);
    node1->next = new ListNode(1);
    node1->next->next = new ListNode(2);
    node1->next->next->next = new ListNode(3);
    node1->next->next->next->next = new ListNode(3);

    p = s.deleteDuplicates(node1);
    while (p != nullptr)
    {
        cout << p->val << endl;
        p = p->next;
    }
    cout << endl;
}