#include <iostream>

using namespace std;

struct databarang{ // deklarasi struct dengan nama struct databarang
    
    //deklarasi array dinamis dengan  pointer
    string *kode = new string[50];  
    int *jumlah = new int[50];      
    string *nama = new string[50];  


};

int main() {
    databarang db; //inisialisasi struct/membuat objek baru dengan nama db

    int a,i; //deklarasi variabel  

    cout << "==============================================" << "\n";
    cout << "RIRI ANNISATUNNAZA - 2100827 -2B RPL -POINTER2" <<  "\n";
    cout << "==============================================" << "\n";

    cout << "Banyak Inputan : " ; //menampilkan perintah untuk menginputkan banyak data yang akan diinput
    cin >> a; //input nilai banyak data yang akan diinputkan
    cout << endl;

    for (int i =1; i<= a; i++) { //proses perulangan  data sesuai banyaknya nilai inputan

        //menampilkan perintah input kode, nama, jumlah barang dengan mengakses variabel & field struct
        cout << i << ". Kode Barang :"; cin >> db.kode[i];      
        cout << "   Nama Barang :"; cin >> db.nama[i];         
        cout << "   Jumlah Barang :"; cin >> db.jumlah[i];     
        cout << endl;

    }

    cout << "Daftar Barang yang Diinputkan :" << "\n";
    for (int i =1; i<= a; i++) { // proses perulangan hasil inputan sesuai banyak inputan

	//menampilkan hasil input kode, nama, jumlah barang dengan mengakses variabel & field Struct
        cout << i << ". Kode Barang :" << db.kode[i] << endl;   
        cout << "   Nama Barang :" << db.nama[i] << endl;      
        cout << "   Jumlah Barang :" << db.jumlah[i] << endl;   
        cout << endl;

}
}