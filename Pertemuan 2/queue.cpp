#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* queueHead = NULL;
node* queueTail = NULL;

// Menggunakan Insert Last
void enqueue(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (queueHead == NULL) {
        queueHead = newnode;
        queueTail = newnode;
    } else {
        queueTail -> next = newnode;
        queueTail = newnode;
    }
}

// Menggunakan Delete First
void dequeue() {
    if (queueHead == NULL) {
        cout << "Queue kosong!!!" << endl;
        return;
    }

    node *temp = queueHead;
    queueHead = queueHead -> next;

    if (queueHead == NULL) {
        queueTail = NULL;
    }
    delete temp;
}

void display() {
    node *temp = queueHead;
    cout << "Queue : ";
    while (temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL\n";
}

int main() {
    system("cls");

    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();
}