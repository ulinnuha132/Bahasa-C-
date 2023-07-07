#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
};

Node* head = NULL;
Node* tail = NULL;

bool isEmpty();
void insert(int data);
void deleteFromFront();
void printNode();

int main() {
	int pilihanMenu;
	int data;
	char ulang;
	
	do {
		cout << ">>> -------------------------------------------- <<<" << endl;
		cout << ">>> PILIHAN MENU DOUBLE LINKED LIST NON CIRCULAR <<<" << endl;
		cout << ">>> -------------------------------------------- <<<" << endl << endl;
		cout << "Menu : " << endl;
		cout << "                 1. Nambah Node " << endl;
		cout << "                 2. Hapus Node dari Depan " << endl;
		cout << "                 3. Tampilkan Node" << endl;
		cout << "                 4. End" << endl;
		cout << ">>> -------------------------------------------- <<<" << endl;
		cout << "  "<<endl;
		cout << "Masukkan pilihan Anda : ";
		cin >> pilihanMenu;
		cout << endl;
		cout << " "<<endl;

		switch (pilihanMenu) {
			case 1:
				cout << "Masukkan data : ";
				cin >> data;
				insert(data);
				break;
			case 2:
				deleteFromFront();
				break;
			case 3:
				printNode();
				break;
			case 4:
			default:
				break;
		}

		cout << "\nKembali ke menu? (y/n): ";
		cin >> ulang;
	} while (ulang == 'y' || ulang == 'Y');
}

bool isEmpty() {
	return (head == NULL);
}

void insert(int data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;

	if (isEmpty()) {
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

void deleteFromFront() {
	if (isEmpty()) {
		cout << "\nLinked List kosong. Penghapusan tidak dapat dilakukan." << endl;
		return;
	}

	Node* del = head;
	int simpan = head->data;
	
	if (head->next != NULL) {
		head = head->next;
		head->prev = NULL;
	} else {
		head = NULL;
		tail = NULL;
	}

	delete del;
	cout << "\n" << simpan << " telah dihapus" << endl;
}

void printNode() {
	if (isEmpty()) {
		cout << "\nTidak ada data dalam linked list" << endl;
		return;
	}

	cout << "Isi linked list: " << endl;
	Node* print = head;
	while (print != NULL) {
		cout << print->data << " <=> ";
		print = print->next;
	}
	cout << "NULL" << endl;
}
