#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    Stack myStack;
    Queue myQueue;
    int choice, value;

    do {
        cout << "Menu:\n";
        cout << "1. Push to Stack\n";
        cout << "2. Pop from Stack\n";
        cout << "3. Peek Stack\n";
        cout << "4. Print Stack\n";
        cout << "5. Enqueue to Queue\n";
        cout << "6. Dequeue from Queue\n";
        cout << "7. Peek Queue\n";
        cout << "8. Print Queue\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Push to Stack
                cout << "Enter value to push: ";
                cin >> value;
                myStack.push(value);
                break;

            case 2: // Pop from Stack
                if (!myStack.isEmpty()) {
                    myStack.pop();
                    cout << "Popped from stack.\n";
                } else {
                    cout << "Stack is empty, cannot pop.\n";
                }
                break;

            case 3: // Peek Stack
                if (!myStack.isEmpty()) {
                    cout << "Top of stack: " << myStack.peek() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 4: // Print Stack
                cout << "Stack contents: ";
                myStack.printStack();
                break;

            case 5: // Enqueue to Queue
                cout << "Enter value to enqueue: ";
                cin >> value;
                myQueue.enqueue(value);
                break;

            case 6: // Dequeue from Queue
                if (!myQueue.isEmpty()) {
                    myQueue.dequeue();
                    cout << "Dequeued from queue.\n";
                } else {
                    cout << "Queue is empty, cannot dequeue.\n";
                }
                break;

            case 7: // Peek Queue
                if (!myQueue.isEmpty()) {
                    cout << "Front of queue: " << myQueue.peek() << endl;
                } else {
                    cout << "Queue is empty.\n";
                }
                break;

            case 8: // Print Queue
                cout << "Queue contents: ";
                myQueue.printQueue();
                break;

            case 9: // Exit
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cout << endl; // Add an empty line for better readability
    } while (choice != 9); // Loop until user chooses to exit

    return 0;
}
