#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};
class Queue{
private:
    Node *qfront;
    Node *qrear;
public:
    Queue(){}
    void enqueue(int n){}
    void dequeue(){}
    bool isEmpty(){}
    int size(){}
    void displayQueue(){}
    int front(){}
    int back(){}
};


int main(int argc, const char * argv[]) {

//DO NOT CHANGE MAIN

 Queue q;

 q.enqueue(5);
 q.displayQueue();
 
 q.enqueue(50);
 q.displayQueue();
 
 q.enqueue(500);
 q.displayQueue();
 
 cout<<q.isEmpty()<<endl;
 cout<<q.size()<<endl;
 
 q.dequeue();
 q.displayQueue();
 
 cout<<q.isEmpty()<<endl;
 cout<<q.size()<<endl;
 
 q.enqueue(100);
 q.displayQueue();
 
 q.dequeue();
 cout<<q.front()<<" "<<q.back()<<endl;
 q.dequeue();
 q.displayQueue();
 
 q.dequeue();
 cout<<q.isEmpty()<<endl;
 cout<<q.size()<<endl;
 
 return 0;
}

