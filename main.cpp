#include <iostream>
using namespace std;
#include "functions.h"

int main() {
    Stack myStack;
    Queue myQueue;
    int choice = -1;
    int value;

    while (choice != 0) {
        cout << "\n===== Menu =====" << endl;
        cout << "1. Push to Stack" << endl;
        cout << "2. Pop from Stack" << endl;
        cout << "3. Peek Stack" << endl;
        cout << "4. Check if Stack is Empty" << endl;
        cout << "5. Stack Size" << endl;
        cout << "6. Clear Stack" << endl;
        cout << "7. Print Stack" << endl;
        cout << "8. Enqueue to Queue" << endl;
        cout << "9. Dequeue from Queue" << endl;
        cout << "10. Check if Queue is Empty" << endl;
        cout << "11. Queue Size" << endl;
        cout << "12. Print Queue" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // Push to Stack
            cout << "Enter value to push: ";
            cin >> value;
            myStack.push(value);
            cout << value << " pushed to stack." << endl;
        } 
        else if (choice == 2) {
            // Pop from Stack
            if (myStack.isEmpty()) {
                cout << "Stack is empty, nothing to pop!" << endl;
            } else {
                myStack.pop();
                cout << "Top element popped from the stack." << endl;
            }
        } 
        else if (choice == 3) {
            // Peek Stack
            if (myStack.isEmpty()) {
                cout << "Stack is empty, no top element!" << endl;
            } else {
                cout << "Top element is: " << myStack.peek() << endl;
            }
        } 
        else if (choice == 4) {
            // Check if Stack is Empty
            cout << (myStack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
        } 
        else if (choice == 5) {
            // Stack Size
            cout << "Stack size: " << myStack.size() << endl;
        } 
        else if (choice == 6) {
            // Clear Stack
            myStack.clear();
            cout << "Stack cleared." << endl;
        } 
        else if (choice == 7) {
            // Print Stack
            if (myStack.isEmpty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Stack elements: " << endl;
                myStack.printStack();
            }
        } 
        else if (choice == 8) {
            // Enqueue to Queue
            cout << "Enter value to enqueue: ";
            cin >> value;
            myQueue.enqueue(value);
            cout << value << " enqueued to queue." << endl;
        } 
        else if (choice == 9) {
            // Dequeue from Queue
            if (myQueue.isEmpty()) {
                cout << "Queue is empty, nothing to dequeue!" << endl;
            } else {
                myQueue.dequeue();
                cout << "Front element dequeued from the queue." << endl;
            }
        } 
        else if (choice == 10) {
            // Check if Queue is Empty
            cout << (myQueue.isEmpty() ? "Queue is empty." : "Queue is not empty.") << endl;
        } 
        else if (choice == 11) {
            // Queue Size
            cout << "Queue size: " << myQueue.size() << endl;
        } 
        else if (choice == 12) {
            // Print Queue
            if (myQueue.isEmpty()) {
                cout << "Queue is empty." << endl;
            } else {
                cout << "Queue elements: " << endl;
                myQueue.printQueue();
            }
        } 
        else if (choice == 0) {
            cout << "Exiting..." << endl;
        } 
        else {
            cout << "Invalid choice, please enter a valid option." << endl;
        }
    }

    return 0;
}