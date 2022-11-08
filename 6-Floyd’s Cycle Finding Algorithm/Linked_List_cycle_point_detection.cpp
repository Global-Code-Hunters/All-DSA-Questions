// Solution 1

#include<bits/stdc++.h>

class Solution1 {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
            return nullptr;
        auto curr = head->next;
        ListNode *prev = head;
        while(curr != nullptr)
        {
            if(isVisited(curr,head,prev))
                return curr;
            prev = curr;
            curr = curr->next;
        }
        return nullptr;
    }
private:
    bool isVisited(ListNode *curr,ListNode *head,ListNode *prev)
    {
        auto ptr = head;
        while(ptr != prev){
            if(ptr == curr)
                break;
            ptr = ptr->next;
        }
        return ptr==curr;
    }
};

// <---------------Solution 2---------------->
// using unordered_set: TC- O(N) SC- O(N)
class Solution2 {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==nullptr)
            return nullptr;
        auto curr = head;
        unordered_set<ListNode*>visited;
        while(curr != nullptr)
        {
            if(visited.find(curr)!=visited.end())
                return curr;
            visited.insert(curr);
            curr=curr->next;
        }
        return nullptr;
    }
};

// <---------------Solution 3---------------->
//using Floyd's Tortoise and Hare Algorithm: TC- O(N) SC- O(1)
class Solution3 {
public:
    ListNode *detectCycle(ListNode *head) {
        int flag=0;
        struct ListNode *slow=head,*fast = head;
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            return NULL;
        else
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
};