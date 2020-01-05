#include <iostream>
using namespace std;

struct ListNode
{
    int value;
    ListNode* next;
};

void createList(ListNode* &pHead,int value)
{
    ListNode* node = (ListNode*)malloc(sizeof (ListNode));
    node->value = value;
    node->next = nullptr;

    if(pHead == nullptr)
    {
        pHead = node;
    }
    else
    {
        node->next = pHead;
        pHead = node;
    }
}

void printList(ListNode* pHead)
{
    while (pHead != nullptr)
    {
        cout << pHead->value << ends;
        pHead = pHead->next;
    }
    cout << endl;
}

//递归方式实现
ListNode* reverseList(ListNode* pHead)
{
    if(pHead == nullptr || pHead->next == nullptr)
    {
        return pHead;
    }
    else
    {
        ListNode* newHead = reverseList(pHead->next);
        pHead->next->next = pHead;
        pHead->next = nullptr;
        return newHead;
    }
}

//非递归方式实现
ListNode* reverseList2(ListNode* &pHead)
{
    if(pHead == nullptr || pHead->next == nullptr)
    {
        return pHead;
    }
    else
    {
        ListNode* pPre = pHead;
        ListNode* pCurrent = pHead->next;

        while (pCurrent != nullptr)
        {
            ListNode* pNext = pCurrent->next;
            pCurrent->next = pPre;
            pPre = pCurrent;
            pCurrent = pNext;
        }

        pHead->next = nullptr;
        pHead = pPre;

        return pHead;
    }
}

int main()
{

    ListNode *pHead = nullptr;
    for(int i = 0;i < 9;i++)
    {
        createList(pHead,i);
    }

    printList(pHead);

    pHead = reverseList(pHead);

    printList(pHead);

    return 0;
}
