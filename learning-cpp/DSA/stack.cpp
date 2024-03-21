#include <iostream>
using namespace std;

class ListNode{

public:
    int val;
    ListNode* next;
    ListNode() : val(0),next(nullptr){}
    ListNode(const int &val) : val(val),next(nullptr){}
};



class Stack{
    ListNode*top;
    int length;
public:
    Stack():top(nullptr),length(0){}
    void push(const int data){
        ListNode *newnode=new ListNode(data);
        newnode->next=top;
        top=newnode;
        length++;
    }
    int pop(){
        if(!top)
            return 0;
        ListNode *ptr=top;
        top=top->next;
        length--;
        return ptr->val;
        
    }
};

int main(){
    Stack stack;
    string s;
    getline(cin,s);
    cout<<s<<endl;
    for(char c:s){
        stack.push(c);
    }
    string rev="";
    int i;
    while(i=stack.pop()){
        rev+=(char)i;
    }
    cout<<rev<<endl;
    return 0;
}