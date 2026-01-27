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
    float totalAkhir;

    cout << "===================================" << endl;
    cout << "      PROGRAM KASIR MINIMARKET      " << endl;
    cout << "===================================" << endl;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlahbarang;

    for (int i = 0; i < jumlahbarang; i++) {
        cout << "\nbarang ke-" << i + 1 << endl;
        cout << "Nama barang   : ";
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
             << " | " << jumlah[i]
             << " x " << harga[i]
             << " = " << subtotal[i] << endl;
    }

    cout << "-----------------------------------" << endl;
    cout << "Total Belanja : Rp " << total << endl;
    cout << "Diskon        : Rp " << diskon << endl;
    cout << "Total Bayar   : Rp " << totalAkhir << endl;
    cout << "-----------------------------------" << endl;
    cout << "Terima kasih telah berbelanja!" << endl;

    return 0;
}