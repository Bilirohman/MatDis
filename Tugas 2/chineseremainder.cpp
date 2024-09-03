#include <iostream>
using namespace std;

// Fungsi untuk menghitung invers modulo
int modInverse(int a, int m)
{
    a = a % m;
    for (int x = 1; x < m; x++)
    {
        if ((a * x) % m == 1)
            return x;
    }
    return -1;
}

int main()
{
    int n;

    // Meminta jumlah persamaan dari pengguna
    cout << "Masukkan jumlah persamaan: ";
    cin >> n;

    int a[n], m[n];

    // Meminta input nilai a dan m dari pengguna
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai a" << i + 1 << ": ";
        cin >> a[i];
        cout << "Masukkan nilai m" << i + 1 << ": ";
        cin >> m[i];
    }

    // Hitung M sebagai hasil kali dari semua m
    int M = 1;
    for (int i = 0; i < n; i++)
    {
        M *= m[i];
    }

    int x = 0;

    // Hitung solusi unik x
    for (int i = 0; i < n; i++)
    {
        int Mi = M / m[i];
        int yi = modInverse(Mi, m[i]);
        x += a[i] * Mi * yi;
    }

    x = x % M;

    // Tampilkan hasilnya
    cout << "Solusi unik dari sistem kekongruenan tersebut adalah x = " << x << endl;

    return 0;
}
