#include <iostream>
using namespace std;

int main() {
    float harga, diskon, harga_diskon, harga_setelah_diskon;
    
    cout << "Masukkan harga barang: ";cin>>harga;
    cout << "Masukkan persentase diskon: "; cin>>diskon;
    harga_diskon = (diskon/100)*harga;
    harga_setelah_diskon = harga - harga_diskon;
    cout << "Harga setelah diskon: "<<harga_setelah_diskon<<endl;
}