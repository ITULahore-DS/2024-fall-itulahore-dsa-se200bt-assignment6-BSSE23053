#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <vector>
using namespace std;
//template<typename T>
class Node
{
private:
int data;
Node* next;
public:
    Node(){
        data=0;
        next=nullptr;
    }
    ~Node(){
        //clean any thing needed
    }
    Node(int value){
        this->data=value;
    }
    void setNext(Node* val){
        next=val;
    }
    Node * getNext(){
        return next;

    }
    int getData(){
        return data;
    }
    void setData(int val){
        data=val;
    }
};

class  Stack 
{
private:
   Node* top;
   int count;
public:
     Stack (){
     top=nullptr;
        count=0;
     }
    ~Stack() {
    Node* temp = top;
    while (temp != nullptr) {
        Node* nextNode = temp->getNext();  // Save the next node
        delete temp;  // Delete the current node
        temp = nextNode;  // Move to the next node
    }
}

    bool isEmpty(){
        if (top==nullptr || count==0)
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
    void push(int data){
        if (isEmpty())
        {
           Node* temp=new Node (data);
           top=temp;
           top->setNext(nullptr);
           count++;
        }
        else
        {
            Node* temp=new Node (data);
            temp->setNext(top);
            top=temp;
            count++;
        }
    }
    void pop(){
        if (isEmpty())
        {
            cout<<"there is nothing to pop"<<endl;
            return;
        }
        else
        {
            Node * temp=top;
            top=top->getNext();
            delete temp;
            count--;
        }
    }
    int peek() {
    if (isEmpty()) {
         return -1;  
    } else {
        return top->getData();
    }
}
    int size(){
        return count;
    }
    void clear(){
         Node * temp=top;
        while (temp!=nullptr)
        {
            delete[] temp;
            temp=temp->getNext();
        }
        top=nullptr;
        count=0;
    }
    void printStack(){
       Node * temp=top;
        while (temp!=nullptr)
        {
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
        }
        
    }
};
class  Queue
{
private:
    int count;
    Node * start;
    Node * end;
public:
     Queue(){
        count=0;
        start=nullptr;
        end=nullptr;
     }
    ~ Queue(){
        Node * temp=start;
        while (temp!=nullptr)
        {
            delete temp;
            temp=temp->getNext();
        }
        
    }
      bool isEmpty(){
        if (start==nullptr || count==0)
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
    void enqueue(int data){
        Node * temp=new Node(data);
        if (isEmpty())
        {
            start=temp;
            end=temp;
            count++;
        }
        else
        {
            end->setNext(temp);
            end=temp;
            count++;
        } 
    }
     void dequeue(){
        if (isEmpty())
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            Node * temp;
        temp=start;
        start=start->getNext();
        delete temp;
        --count;
        }
        
        
     }
     int size()
     {
        return count;
     }
     void printQueue(){
         Node * temp=start;
        while (temp!=nullptr)
        {
            cout<<temp->getData()<<endl;
            temp=temp->getNext();
        }
    
     }
};








#endif