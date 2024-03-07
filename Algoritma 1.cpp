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
	cout << endl;			//output baris kosong
	cout << "=================================" << endl;	//output ke layar
	cout << "Element Array yang telah tersusun" << endl;	//output ke layar
	cout << "=================================" << endl;	//output ke layar
	for (int j = 0; j < n; j++) {				//looping dengan j dimulai dari 0 hingga n-1
		cout << "Data ke-" << j + 1 << "; ";	
		cout << a[j] << endl;					//output ke layar
	}
	cout << endl;								//output baris kosong
}

void bubbleSortArray() {	//procedure untuk mengurutkan array dengan metode bubble sort
	int pass = 1;			//step 1
	for (int pass; pass <= n - 1; pass++) {		//looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j <= n - 1 - pass; j++) {	//jika nilai pada a[j] lebih besar dari a[j+1]
			if (a[j] > a[j + 1]) {					//simpan ke nilai a[j] ke variabel sementara temp
				int temp = a[j];					//assign nilai a[j+1] ke a[j]
				a[j] = a[j + 1];					//assign nilai temp ke a[j+1]
				a[j + 1];
			}
		}
	}
}

