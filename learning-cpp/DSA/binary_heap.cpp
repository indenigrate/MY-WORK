#include <iostream>
#include "BT.h"
#include <queue>

//MAX HEAP  [OR]  MAX PRIORITY QUEUE
class MAX_PQ{
    int *heap;
    int n;
public:
    MAX_PQ(const int n){
        this->n=n;
        this->heap=new int[n+1];
    }
    bool empty(){
        return n!=0;
    }
    int size(){
        return n;
    }
};


int main(){
    MAX_PQ pq(3);
    cout<<pq.size()<<endl<<pq.empty()<<endl;
    
}