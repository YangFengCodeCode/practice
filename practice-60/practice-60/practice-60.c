#define _CRT_SECURE_NO_WARNINGS 

//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* tail = head;
//    struct ListNode* prev = head;
//    while (tail)
//    {
//        if (tail->val == val)
//        {
//            if (tail == head)
//            {
//                head = tail->next;
//                free(tail);
//                tail = head;
//            }
//            else
//            {
//                struct ListNode* next = tail->next;
//                prev->next = next;
//                free(tail);
//                tail = next;
//            }
//
//        }
//        else
//        {
//            prev = tail;
//            tail = tail->next;
//        }
//    }
//
//
//    return head;
//
//}


struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;

}


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if (list1 == NULL)
    {
        return list2;
    }
    if (list2 == NULL)
    {
        return list1;
    }
    struct ListNode* head = NULL, * tail = NULL;
    //带哨兵位
    head = tail = (struct ListNode*)malloc(sizeof(struct ListNode));
    //将大的不断尾插到新链表中
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
            tail = tail->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
            tail = tail->next;
        }
    }
    if (list1)
    {
        tail->next = list1;
    }
    if (list2)
    {
        tail->next = list2;
    }
    struct ListNode* newhead = head->next;
    free(head);
    head = newhead;
    return head;
}



struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
    }
    return newhead;

}



//找中间节点
struct ListNode* middlenode(struct ListNode* head)
{
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


//将中间节点后面的链表进行逆序
struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* newhead = NULL;
    struct ListNode* tail = head;
    while (tail)
    {
        struct ListNode* next = tail->next;
        tail->next = newhead;
        newhead = tail;
        tail = next;
    }
    return newhead;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode* newhead = middlenode(head);
    struct ListNode* node = reverseList(newhead);

    //两个链表进行比较
    while (head && node)
    {
        if (head->val != node->val)
        {
            return false;
        }

        head = head->next;
        node = node->next;

    }
    return true;
}


struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
    // write code here
    struct ListNode* slow = pListHead;
    struct ListNode* fast = pListHead;
    while (k)
    {
        if (fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
        k--;
    }

    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}





struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* curA = headA;
    struct ListNode* curB = headB;
    int lenA = 0, lenB = 0;
    while (curA)
    {
        curA = curA->next;
        lenA++;
    }
    while (curB)
    {
        curB = curB->next;
        lenB++;
    }

    if (curA != curB)//如果两个链表都为空 就会进来 虽然两个指针都指向空指针 但是不是同一个指针
    {
        return NULL;
    }
    int k = abs(lenA - lenB);
    if (lenA < lenB)
    {
        while (k--)
        {
            headB = headB->next;
        }
    }
    else
    {
        while (k--)
        {
            headA = headA->next;
        }
    }

    while (headA != headB)
    {
        headA = headA->next;
        headB = headB->next;
    }
    return headA;

}




struct ListNode* partition(struct ListNode* head, int x) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* ihead, * itail, * ghead, * gtail;

    ihead = itail = (struct ListNode*)malloc(sizeof(struct ListNode));
    ghead = gtail = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = head;
    itail->next = NULL;
    gtail->next = NULL;
    while (cur)
    {
        if (cur->val < x)
        {
            itail->next = cur;
            itail = itail->next;
        }
        else
        {
            gtail->next = cur;
            gtail = gtail->next;
        }
        cur = cur->next;
    }

    itail->next = ghead->next;
    gtail->next = NULL;
    struct ListNode* newhead = ihead->next;
    free(ihead);
    free(ghead);
    head = newhead;
    return head;

}



bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            struct ListNode* meet = slow;
            while (meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            if (meet == head)
            {
                return true;
            }
        }
    }
    return false;
}





struct ListNode* GetSameNode(struct ListNode* headA, struct ListNode* headB)
{
    struct ListNode* tailA = headA;
    struct ListNode* tailB = headB;
    int lenA = 1, lenB = 1;
    while (tailA)
    {
        tailA = tailA->next;
        lenA++;
    }
    while (tailB)
    {
        tailB = tailB->next;
        lenB++;
    }
    if (tailA != tailB)
    {
        return NULL;
    }
    int k = abs(lenA - lenB);
    if (lenA < lenB)
    {
        while (k--)
        {
            headB = headB->next;
        }
    }
    else
    {
        while (k--)
        {
            headA = headA->next;
        }
    }
    while (headA != headB)
    {
        headA = headA->next;
        headB = headB->next;
    }
    if (headA == headB)
    {
        return true;
    }
}
bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            struct ListNode* meet = slow->next;
            slow->next = NULL;
            return GetSameNode(meet, head);

        }

    }
    return false;
}




bool GetSameNode(struct ListNode* headA, struct ListNode* headB)
{
    struct ListNode* tailA = headA;
    struct ListNode* tailB = headB;
    int lenA = 1, lenB = 1;
    while (tailA)
    {
        tailA = tailA->next;
        lenA++;
    }
    while (tailB)
    {
        tailB = tailB->next;
        lenB++;
    }
    if (tailA != tailB)
    {
        return NULL;
    }
    int k = abs(lenA - lenB);
    if (lenA < lenB)
    {
        while (k--)
        {
            headB = headB->next;
        }
    }
    else
    {
        while (k--)
        {
            headA = headA->next;
        }
    }
    while (headA != headB)
    {
        headA = headA->next;
        headB = headB->next;
    }
    return headA == headB;
}

bool hasCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            struct ListNode* meet = slow->next;
            slow->next = NULL;
            return GetSameNode(meet, head);

        }

    }
    return false;
}







struct Node* copyRandomList(struct Node* head) {
    //复制节点
    struct Node* cur = head;
    while (cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        struct Node* next = cur->next;
        copy->val = cur->val;
        cur->next = copy;
        copy->next = next;
        cur = next;
    }

    //复制random
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }
        cur = copy->next;
    }

    //尾插
    cur = head;
    struct Node* copyhead = NULL, * copytail = NULL;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        if (copytail == NULL)
        {
            copyhead = copytail = copy;
        }
        else
        {
            copytail->next = copy;
            copytail = copytail->next;
        }

        //恢复原链表
        cur->next = next;
        //继续走
        cur = next;
    }
    return copyhead;

}