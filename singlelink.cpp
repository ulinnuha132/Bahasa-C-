#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* headNode = NULL;
Node* currentNode = NULL;

bool isEmpty();
void insertNode(string data);
void deleteFromFront();
void deleteFromEnd();
void deleteAll();
void printNode();
void displayErrorMessage();

bool isEmpty() {
    return (headNode == NULL);
}

void insertNode(string data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty()) {
        headNode = newNode;
        currentNode = newNode;
    } else {
        currentNode->next = newNode;
        currentNode = newNode;
    }
}

void deleteFromFront() {
    if (!isEmpty()) {
        Node* deleteNode = headNode;
        headNode = headNode->next;
        delete deleteNode;
        cout << "Node berhasil dihapus" << endl << endl;
    } else {
        cout << "List masih kosong !!!" << endl << endl;
    }
}

void deleteFromEnd() {
    if (!isEmpty()) {
        if (headNode == currentNode) {
            headNode = NULL;
            currentNode = NULL;
        } else {
            Node* prevNode = headNode;
            while (prevNode->next != currentNode) {
                prevNode = prevNode->next;
            }
            currentNode = prevNode;
            currentNode->next = NULL;
        }
        cout << "Node berhasil dihapus" << endl << endl;
    } else {
        cout << "List masih kosong !!!" << endl << endl;
    }
}

void deleteAll() {
    if (!isEmpty()) {
        Node* tempNode = headNode;
        while (tempNode != NULL) {
            Node* deleteNode = tempNode;
            tempNode = tempNode->next;
            delete deleteNode;
        }
        headNode = NULL;
        currentNode = NULL;
        cout << "Semua node berhasil dihapus" << endl << endl;
    } else {
        cout << "List masih kosong !!!" << endl << endl;
    }
}

void printNode() {
    if (!isEmpty()) {
        Node* tempNode = headNode;
        int i = 1;
        while (tempNode != NULL) {
            cout << "Data pada node #" << i << " = " << tempNode->data << endl;
            tempNode = tempNode->next;
            i++;
        }
    } else {
        cout << "List masih kosong !!!" << endl << endl;
    }
}

void displayErrorMessage() {
    cout << "Menu yang Anda pilih tidak terdaftar !!!" << endl << endl;
}

int main() {
    int choice;
    string data;

    while (true) {
        cout << "---------  M  E  N  U  --------- " << endl;
        cout << "1. Menambahkan Node" << endl;
        cout << "2. Menghapus Node dari Depan" << endl;
        cout << "3. Menghapus Node dari Belakang" << endl;
        cout << "4. Menghapus semua Node" << endl;
        cout << "5. Tampilkan Node" << endl;
        cout << "6. Exit" << endl;
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan data: ";
                cin >> data;
                insertNode(data);
                break;
            case 2:
                deleteFromFront();
                break;
            case 3:
                deleteFromEnd();
                break;
            case 4:
                deleteAll();
                break;
            case 5:
                printNode();
                break;
            case 6:
                return 0;
            default:
                displayErrorMessage();
                break;
        }
    }
}