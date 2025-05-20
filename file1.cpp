#include <iostream>
#include <string>
using namespace std;

class barang{
private:
int kodeBarang;
string namaBarang;

public:
       barang(int kode, string nama)

       {
          kodeBarang = kode;
          namaBarang = nama;
        
       }

       void Input(){
           cout << "Kode Barang : " << kodeBarang << endl;
           cout << "Nama Barang: " << kodeBarang << endl;
       }
};

int main() 
{
    barang barang(154, "mobil");

    barang.Input();
    return 0;
}
