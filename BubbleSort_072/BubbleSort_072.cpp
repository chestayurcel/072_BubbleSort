#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi variabel global array a dengan ukuran 20
int n; // Deklarasi variabel global n untuk menyimpan banyak elemen array

void input() {  // prosedur untuk input

    while (true) {
        cout << "Masukkan banyaknya elemen pada array : "; // output ke layar
        cin >> n; // input dari pengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // keluar dari loop
        else {  // jika n lebih dari 20
            cout << "\nArray dpat mempunyai maksimal 20 elemen. \n"; // output ke layar
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //  output ke layar
        cin >> arr[i]; // output dari pengguna
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
