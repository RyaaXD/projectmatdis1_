#include <iostream>
using namespace std;

int main() {
    int jumlahbarang;
    string namabarang[50];
    int harga[50];
    int jumlah[50];
    int subtotal[50];
    int total = 0;
    float diskon = 0;
    float totalakhir;

    cout << "===================================" << endl;
    cout << "      PROGRAM KASIR MINIMARKET      " << endl;
    cout << "===================================" << endl;

    cout << "masukkan jumlah barang: ";
    cin >> jumlahbarang;

    for (int i = 0; i < jumlahbarang; i++) {
        cout << "\nbarang ke-" << i + 1 << endl;
        cout << "nama barang   : ";
        cin >> namabarang[i];
        cout << "harga barang  : ";
        cin >> harga[i];
        cout << "Jumlah beli   : ";
        cin >> jumlah[i];

        subtotal[i] = harga[i] * jumlah[i];
        total = total + subtotal[i];
    }

    if (total >= 100000) {
        diskon = total * 0.10;
    } else {
        diskon = 0;
    }

    totalAkhir = total - diskon;

    cout << "\n===================================" << endl;
    cout << "           STRUK BELANJA            " << endl;
    cout << "===================================" << endl;

    for (int i = 0; i < jumlahbarang; i++) {
        cout << namabarang[i]
             << " I " << jumlah[i]
             << " x " << harga[i]
             << " = " << subtotal[i] << endl;
    }

    cout << "-----------------------------------" << endl;
    cout << "total belanja : Rp " << total << endl;
    cout << "diskon        : Rp " << diskon << endl;
    cout << "total Bayar   : Rp " << totalAkhir << endl;
    cout << "-----------------------------------" << endl;
    cout << "terima kasih telah berbelanja!" << endl;

    return 0;
}