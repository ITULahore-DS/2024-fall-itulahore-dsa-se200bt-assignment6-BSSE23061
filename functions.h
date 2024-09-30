//
// Created by Laiba on 9/28/2024.
//

#ifndef INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23061_FUNCTIONS_H
#define INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23061_FUNCTIONS_H


class Node {
    int data;
    Node* next;
public:
    Node(){
        data=0;
        next=nullptr;
    }
    Node(int data);
    ~Node();
    void setNext(Node* nextNode);
    Node* getNext();
    void setData(int dataValue);
    int getData();
};
class List {
    Node *head;
    Node *tail;
    int count;
public:
    List(){
        head=nullptr;
        tail=nullptr;
        count=0;
    }
    ~List();
    int size() const;
    bool empty() const;
    Node *getHead( );
    Node *getTail();
    void push(int data);
    void pop();
   // void clear();
    void printList();
};
class Stack{
    Node* top;
    int count;
    List list;
public:
    Stack();
    ~Stack();
    bool isEmpty();
    void push(int data);
    void pop();
    int peek();
    int size();
    void clear();
    void printStack();
};
class Queue{
    Node* front; // Pointer to the front of the queue
    Node* back;  // Pointer to the back of the queue
    int count;
    List list;
public:
    Queue();
    ~Queue();
    bool isEmpty();
    int peek();
    void enqueue(int data);
    void dequeue();
    int size();
    void printQueue();

};
#endif //INC_2024_FALL_ITULAHORE_DSA_SE200BT_ASSIGNMENT6_BSSE23061_FUNCTIONS_H
