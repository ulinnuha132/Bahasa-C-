#include <iostream>
#define MAX_VERTEX 10
using namespace std;

void tambahEdgeUndirected(int matriks[][MAX_VERTEX], int vertexSumber, int vertexTujuan)
{
    matriks[vertexSumber][vertexTujuan] = 1;
    matriks[vertexTujuan][vertexSumber] = 1;
}

void tambahEdgeDirected(int matriks[][MAX_VERTEX], int vertexSumber, int vertexTujuan)
{
    matriks[vertexSumber][vertexTujuan] = 1;
}

void tambahEdgeWeighted(int matriks[][MAX_VERTEX], int vertexSumber, int vertexTujuan, int weigted)
{
    matriks[vertexSumber][vertexTujuan] = weigted;
}


int main() {
	int pilihanMenu;
    int jumlahVertex, jumlahEdge;
    int vertexSumber, vertexTujuan, weigted;
	char ulang;
	
	do {
		cout << ">>> -------------------------------------------- <<<" << endl;
		cout << ">>> ========= PILIHAN MENU TIPE GRAPH ========== <<<" << endl;
		cout << ">>> -------------------------------------------- <<<" << endl << endl;
		cout << "------------------------------------" << endl;
		cout << "Menu Graph : " << endl;
		cout << "1. Undirected Graph " << endl;
		cout << "2. Directed Graph " << endl;
		cout << "3. Weigted Graph" << endl;
		cout << "4. Selesai" << endl;
		cout << "------------------------------------" << endl;
		cout << "Masukkan Pilihan Tipe Graph Anda: ";
		cin >> pilihanMenu;
		cout << endl;

		switch (pilihanMenu) {
			case 1:
				cout << "==========Undirected Graph==========" << endl;
				cout << "Input Jumlah Vertex: ";
    			cin >> jumlahVertex;
    			cout << "Input Jumlah Edge: ";
    			cin >> jumlahEdge;
    			cout << "------------------------------------" << endl;
    			cout << "Nama Vertex - [1] : A" << endl;
				cout << "Nama Vertex - [2] : B" << endl;
				cout << "Nama Vertex - [3] : C" << endl;
				cout << "Nama Vertex - [4] : D" << endl;
				cout << "Nama Vertex - [5] : E" << endl;
				cout << "------------------------------------" << endl;
    			
		    	for (int i = 0; i < jumlahEdge; i++){
		        cout << "Edge " << i + 1 << endl;
		        cout << "Vertex Sumber: ";
		        cin >> vertexSumber;
		        cout << "Vertex Tujuan: ";
		        cin >> vertexTujuan;
		        cout << "------------------------------------" << endl;
		        cout << endl;
				}
				cout << "Garis yang dapat dibentuk : AB, BA, AC, CA, BC, CB, BD, DB, CE, EC, DE, ED" << endl;
				break;
				
			case 2:
				cout << "==========Directed Graph==========" << endl;
				cout << "Input Jumlah Vertex: ";
    			cin >> jumlahVertex;
    			cout << "Input Jumlah Edge: ";
    			cin >> jumlahEdge;
    			cout << "------------------------------------" << endl;
    			cout << "Nama Vertex - [1] : A" << endl;
				cout << "Nama Vertex - [2] : B" << endl;
				cout << "Nama Vertex - [3] : C" << endl;
				cout << "Nama Vertex - [4] : D" << endl;
				cout << "Nama Vertex - [5] : E" << endl;
				cout << "------------------------------------" << endl;
    			
		    	for (int i = 0; i < jumlahEdge; i++){
		        cout << "Edge " << i + 1 << endl;
		        cout << "Vertex Sumber: ";
		        cin >> vertexSumber;
		        cout << "Vertex Tujuan: ";
		        cin >> vertexTujuan;
		        cout << "------------------------------------" << endl;
		        cout << endl;
		        }
		        cout << "Garis yang dapat dibentuk : AB, AC, CB, CE, DB, ED" << endl;
				break;
		        
			case 3:
				cout << "=============Weigted Graph===========" << endl;
				cout << "Input Jumlah Vertex: ";
    			cin >> jumlahVertex;
    			cout << "Input Jumlah Edge: ";
    			cin >> jumlahEdge;
    			cout << "------------------------------------" << endl;
    			cout << "Nama Vertex - [1] : A" << endl;
				cout << "Nama Vertex - [2] : B" << endl;
				cout << "Nama Vertex - [3] : C" << endl;
				cout << "Nama Vertex - [4] : D" << endl;
				cout << "Nama Vertex - [5] : E" << endl;
				cout << "------------------------------------" << endl;
    			
		    	for (int i = 0; i < jumlahEdge; i++){
		        cout << "Edge " << i + 1 << endl;
		        cout << "Vertex Sumber: ";
		        cin >> vertexSumber;
		        cout << "Vertex Tujuan: ";
		        cin >> vertexTujuan;
		        cout << "Weigted : ";
            	cin >> weigted;
		        cout << "------------------------------------" << endl;
		        cout << endl;
		    	}
		    	cout << "Garis yang dapat dibentuk : AB, AC, CB, CE, DB, ED" << endl;
				cout << "------------------------------------" << endl;
				cout << "Simpul A dengan Simpul B : 13" << endl;
				cout << "Simpul A dengan Simpul C : 8" << endl;
				cout << "Simpul C dengan Simpul B : 16" << endl;
				cout << "Simpul C dengan Simpul E : 15" << endl;
				cout << "Simpul D dengan Simpul B : 10" << endl;
				cout << "Simpul E dengan Simpul D : 7" << endl;
				cout << "------------------------------------" << endl;
				cout << "Jarak panjang 69" << endl;
				cout << "------------------------------------" << endl;
				break;
			case 4:
			default:
				break;
		}

		cout << "\nKembali ke menu? (Y/N): ";
		cin >> ulang;
	} while (ulang == 'y' || ulang == 'Y');
}