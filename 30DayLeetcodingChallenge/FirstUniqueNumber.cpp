#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_map>

using namespace std;
// TLE
// class FirstUnique {
// public:
//     unordered_map<int,int> mp;
//     vector<int> v;
//     FirstUnique(vector<int>& nums) {
//         this->v = nums;
//         for(int i=0,j=nums.size()-1; i<nums.size() && j>=0; i++,j--) {
//             mp[nums[i]]++;
//             if(i==j) break;
//             mp[j]++;
//         }
//     }
    
//     int showFirstUnique() {
//         for(int i=0,j=v.size()-1; i<v.size() && j>=0; i++,j--) {
//             if(mp[v[i]] == 1) return v[i];
//             if(mp[v[j]] == 1) return v[j];
//             if(i==j) break;
//         } 
//         return -1;
//     }
    
//     void add(int value) {
//         mp[value]++;
//         v.push_back(value);
//         // if(mp[value]>1) {
//         //     for(auto i=v.begin(); i!=v.end(); i++) {
//         //         if(*i == value) {
//         //             v.erase(i);
//         //             break;
//         //         }
//         //     }
//         // }
//     }
// };

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */




class LinkedList {
public:
    int val;
    LinkedList *left;
    LinkedList *right;
    LinkedList() {
        this->left = NULL;
        this->right = NULL;
    }

    LinkedList(int val, LinkedList *left, LinkedList *right) {
        this->val = val;
        this->left = left;
        this->right = right;
    }
};

class FirstUnique {
public:
    unordered_map<int,pair<int,LinkedList*>> mp;        // [element, {count, address}]
     void push(LinkedList** head_ref, int new_data) {  
        LinkedList* new_node = new LinkedList();  
        new_node->val = new_data;  
        new_node->right = (*head_ref);  
        (*head_ref) = new_node;  
    } 
    LinkedList *head;
    FirstUnique(vector<int>& nums) {
        for(auto i=nums.begin(); i!=nums.end(); i++) {
            mp[*i].first++;
            if(!mp[*i].first) push(&head, *i);
        }
    }
    
    int showFirstUnique() {
        return head->val;
    }
    
    void add(int value) {
        if(!mp[value].first) push(&head, value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */




// Accepted
class FirstUnique {
public:
    unordered_map<int,int> mp;
    deque<int> v;
    FirstUnique(vector<int>& nums) {
        for(int i : nums) {
            if(!mp[i]) {
                mp[i]++;
                v.push_back(i);
            } else mp[i]++;
        }
    }
    
    int showFirstUnique() {
        if(v.size()==0) return -1;
        while(v.size()>0 && mp[*v.begin()]>1) {
            v.pop_front();
        }
        if(!v.empty())return *v.begin();
        return -1;
    }
    
    void add(int value) {
        if(!mp[value]) {
            mp[value]++;
            v.push_back(value);
        } else mp[value]++;
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */