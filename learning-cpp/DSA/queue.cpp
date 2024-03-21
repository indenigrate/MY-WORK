#include <iostream>
using namespace std;
class Node{
    
public:
    Node*next;
    int val;
    Node():next(nullptr),val(0){};
    Node(const int &val):val(val),next(nullptr){};
};

class Queue{
    Node* front;
    Node* rear;
    int length;
public:
    Queue():front(nullptr),rear(nullptr),length(0){};
    Node* return_front(){return front;}
    Node* return_rear(){return rear;}
    void enqueue(int num){
        Node* newnode=new Node(num);
        if(rear){
            rear->next=newnode;
        }
        else{
            front=newnode;
        }
            length++;
            rear=newnode;
    }
    int dequeue(){
        if(front){
            int data=front->val;
            front=front->next;
            length--;
            if(!front)
                rear=nullptr;
            return data;
        }
    }
    int return_length(){return length;}
};

int main(){

    
    return 0;
}
