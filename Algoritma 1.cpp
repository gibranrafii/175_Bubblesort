#include <iostream>
using namespace std;

int a[20];		//deklarasi array a dengan ukuran 20
int n;			//deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {	//procedure untuk input
	while (true) {	//looping
		cout << "Masukkan Banyaknya elemen pada array : ";	//output ke layar
		cin >> n;	//input dari user
		if (n <= 20)	//jika n berkurang dari atau sama dengan 20
			break;		//keluar dari loop
		else {		//jika n lebih dari 20
			cout << "\nArray dapat mempunyai maks 20 elemen.\n";	//output jika lebih dari 20
		}
	}
	cout << endl;						//output ke layar
	cout << "=====================";	//output ke layar
	cout << "Masukkan Elemen Array";	//output ke layar
	cout << "=====================";	//output ke layar

	for (int i = 0; 1 < n; i++) {		//looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << "; ";	//output ke layar
		cin >> a[i];		//input dari pengguna
	}
}

void display() {			//procedure untuk menampilkan hasil
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << "Data ke-" << j + 1 << "; ";
		cout << a[j] << endl;
	}
	cout << endl; 
}
