#include <iostream>
using namespace std;

class Mahasiswa { 
public: 
    int nim;
    string nama; 
    void tampil() { 
        cout << "NIM= " << nim;
        cout << "\nNama= " << nama;
    }
};

class mataKuliah {
private:
    int sks;
    string kode;
    string namaMK;
public:
    void inputMk() {

        cout << "\nMasukan Jumlah SKS= ";
        cin >> sks;
        cout << "\nMasukan Kode MK= ";
        cin >> kode;
        cout << "\nMasukan Nama MK= ";
        cin >> namaMK;
    }

    void tampilMK() {
        cout << "\nJumlah SKS= " << sks;
        cout << "\nKode MK= " << kode;
        cout << "\nNama MK= " << namaMK << endl;

    }
};

int main() {
    Mahasiswa mhs; 
    mataKuliah mk; 
    cout << "\nMasukkan NIM mahasiswa= ";
    cin >> mhs.nim;
    cout << "\nMAsukkan Nama Mahasiswa= ";
    cin >> mhs.nama;

    mk.inputMk();
    mhs.tampil();
    cout << endl;
    mk.tampilMK();
}
