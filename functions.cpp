//
// Created by Laiba on 9/28/2024.
//
#include <iostream>
#include <stdexcept>
#include "functions.h"

using namespace std;
Node::~Node() {
//delete next;
}

//Node *Node::getNext() {
//    return next;
//}

int Node::getData() {
    return data;
}

void Node::setNext(Node *nextNode) {
    next=nextNode;
}

void Node::setData(int dataValue) {
    data=dataValue;
}

Node::Node(int data) {
    this->data=data;
    next= nullptr;
}

Node *Node::getNext() {
    return next;
}

List::~List() {
    Node *present=head;
    while(present!=nullptr) {
        Node *temp=present->getNext();
        delete present;         //free the current node
        present=temp;           //moving towards next node
    }
    head =tail=nullptr;
    count = 0;
}
bool List::empty() const {
    return head==nullptr;
}
Node *List::getHead() {
    return head;
}
Node *List::getTail() {
    return tail;
}
int List::size() const {
    return count;
}
void List::push(int data) {
//Node*present=head;
//    while (present!= nullptr){
//        Node*temp=present->getNext();
//        delete temp;
//        present=temp;
//    }
//    head->setData(data);
//}
    Node *newNode=new Node(data);     //new node with data
    newNode->setNext(head);  //setting newNode next to the previous head
    head=newNode;                     //now neNode is the head
    count++;

}

void List::pop() {
    if (empty()) {
        return;
    } else {
        Node *temp=head;
        head = head->getNext();
        delete temp;
        count--;
    }
}

void List::printList() {
    Node* temp=head;
    while (temp!= nullptr){
        cout<<temp->getNext();
        temp=temp->getNext();
    }
    cout << endl;
}

Stack::Stack() {
    top= nullptr;
    count=0;
}

Stack::~Stack() {

}

bool Stack::isEmpty() {
    if(list.empty()){
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int data) {
    list.push(data);
    top=list.getHead();           //setting top to new head
    count++;
}

int Stack::peek() {
    if (isEmpty()) {
        //throw std::underflow_error("Stack underflow");
        return -1;
    }
    else{
        return top->getData();
    }
}

int Stack::size() {
    return count;
}

void Stack::pop() {
    if (isEmpty()) {

//        throw std::underflow_error("Stack underflow");
        return;
    } else {
        list.pop();
        top = list.getHead();
        count--;
    }
}


void Stack::clear() {
    while (!isEmpty()) {
        pop();                   // popping elements until the stack is empty
    }
}

void Stack::printStack() {
    list.printList();
}

Queue::Queue(): front(nullptr), back(nullptr), count(0) {}

Queue::~Queue() {

}

bool Queue::isEmpty() {
    return count == 0;
}

int Queue::size() {
    return count;
}

void Queue::enqueue(int data) {
    Node* newNode = new Node(data);

    if (isEmpty()) {
        front = back = newNode;
    } else {
        back->setNext(newNode);
        back = newNode;                              // Updating the back pointer
    }

    count++;
}
int Queue::peek() {
    if (isEmpty()) {
        return -1; // Handle underflow
    }
    return front->getData(); // Return data from the front of the queue
}

void Queue::dequeue() {
    if (isEmpty()) {
        return; // Handle underflow gracefully
    }

    Node* temp = front;          // Storing  current front
    front = front->getNext();    // Moving front to the next node

    delete temp;                 // Deleting the old front node

    if (front == nullptr) {      // queue if becomes empty after dequeue than front and back == null
        back = nullptr;
    }

    count--;
}

void Queue::printQueue() {
list.printList();
}
