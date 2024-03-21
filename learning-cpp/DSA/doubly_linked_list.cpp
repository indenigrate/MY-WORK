#include <iostream>

class ListNode{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(){
        val=0;
        next=nullptr;
        prev=nullptr;
    }
    ListNode(const int &a) : val(a),next(nullptr),prev(nullptr){};
};

class Doubly_linked_list{
    ListNode *head;
    ListNode *tail;
    int length;
public:
    Doubly_linked_list(){
        length=0;
            head=nullptr;
            tail=nullptr;            
    }
    ListNode * return_head(){
        return head;
    }
    int return_length(){
        return length;
    }
    void increase_length(){
        length++;
    }
    void decrease_length(){
        length--;
    }
    void print_list(){
        ListNode *temp=head;
        while(temp){
            printf("%d ",temp->val);
            temp=temp->next;
        }
        printf("\n");
    }

};


int main(){
    
    return 0;
}