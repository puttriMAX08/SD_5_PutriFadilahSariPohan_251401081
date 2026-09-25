#include <iostream>
using namespace std;

struct node {
    int value;
    node* next;
};

node* top = NULL;

// Mengunakan Insert First
void push(int n) {
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = top;
    top = newnode;
}

// Menggunakan Delete First
void pop() {
    if (top == NULL) {
        cout << "Stack kosong!!!" << endl;
        return;
    }

    node *temp = top;
    top = top -> next;

    delete temp;
}

// Melihat data paling atas
void peek() {
    if (top == NULL) {
        cout << "Stack kosong!!!" << endl;
    } else {
        cout << "Top : " << top -> value << endl;
    }
}

void display() {
    node *temp = top;
    cout << "Stack : ";
    while (temp != NULL) {
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL\n";
}

int main() {
    system("cls");

    push(10);
    push(20);
    push(30);
    display();

    peek();

    pop();
    display();
}