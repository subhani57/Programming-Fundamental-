//#include <stdlib.h>
//#include <iostream>
//using namespace std;
//#define MAX 10
//int newsize=0;
//
//struct stack {
//    int items[MAX];
//    int top;
//};
//typedef struct stack st;
//
//void createEmptyStack(st* s) {
//    s->top = -1;
//}
//
//// Check if the stack is full
//int isfull(st* s) {
//    if (s->top == MAX - 1)
//        return 1;
//    else
//        return 0;
//}
//
//// Check if the stack is empty
//int isempty(st* s) {
//    if (s->top == -1)
//        return 1;
//    else
//        return 0;
//}
//
//// Add elements into stack
//void push(st* s, int newitem) {
//    if (isfull(s)) {
//        printf("STACK FULL");
//    }
//    else {
//        s->top++;
//        s->items[s->top] = newitem;
//    }
//    newsize++;
//}
//
//// Remove element from stack
//void pop(st* s) {
//    if (isempty(s)) {
//        printf("\n STACK EMPTY \n");
//    }
//    else {
//        printf("Item popped= %d", s->items[s->top]);
//        s->top--;
//    }
//    newsize--;
//    cout << endl;
//}
//
//// Print elements of stack
//void printStack(st* s) {
//    printf("Stack: ");
//    for (int i = 0; i < newsize; i++) {
//        cout << s->items[i] << " ";
//    }
//    cout << endl;
//}
//
//// Driver code
////int main() {
////    int ch;
////    st* s = (st*)malloc(sizeof(st));
////
////    createEmptyStack(s);
////
////    push(s, 1);
////    push(s, 2);
////    push(s, 3);
////    push(s, 4);
////
////    printStack(s);
////
////    pop(s);
////
////    cout << "\nAfter popping out\n";
////    printStack(s);
////}
//
//
///////enuquene and dequene
//#include <iostream>
//#define SIZE 5
//
//using namespace std;
//
//class Queue {
//private:
//    int items[SIZE], front, rear;
//
//public:
//    Queue() {
//        front = -1;
//        rear = -1;
//    }
//
//    bool isFull() {
//        if (front == 0 && rear == SIZE - 1) {
//            return true;
//        }
//        return false;
//    }
//
//    bool isEmpty() {
//        if (front == -1)
//            return true;
//        else
//            return false;
//    }
//
//    void enQueue(int element) {
//        if (isFull()) {
//            cout << "Queue is full";
//        }
//        else {
//            if (front == -1) front = 0;
//            rear++;
//            items[rear] = element;
//            cout << endl
//                << "Inserted " << element << endl;
//        }
//    }
//
//    int deQueue() {
//        int element;
//        if (isEmpty()) {
//            cout << "Queue is empty" << endl;
//            return (-1);
//        }
//        else {
//            element = items[front];
//            if (front >= rear) {
//                front = -1;
//                rear = -1;
//            } /* Q has only one element, so we reset the queue after deleting it. */
//            else {
//                front++;
//            }
//            cout << endl
//                << "Deleted -> " << element << endl;
//            return (element);
//        }
//    }
//
//    void display() {
//        /* Function to display elements of Queue */
//        int i;
//        if (isEmpty()) {
//            cout << endl
//                << "Empty Queue" << endl;
//        }
//        else {
//            cout << endl
//                << "Front index-> " << front;
//            cout << endl
//                << "Items -> ";
//            for (i = front; i <= rear; i++)
//                cout << items[i] << "  ";
//            cout << endl
//                << "Rear index-> " << rear << endl;
//        }
//    }
//};
//
//int main() {
//    Queue q;
//
//    //deQueue is not possible on empty queue
//    q.deQueue();
//
//    //enQueue 5 elements
//    q.enQueue(1);
//    q.enQueue(2);
//    q.enQueue(3);
//    q.enQueue(4);
//    q.enQueue(5);
//
//    // 6th element can't be added to because the queue is full
//    q.enQueue(6);
//
//    q.display();
//
//    //deQueue removes element entered first i.e. 1
//    q.deQueue();
//
//    //Now we have just 4 elements
//    q.display();
//
//    return 0;
//}
//


