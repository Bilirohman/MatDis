#include <iostream>

// Fungsi untuk menghitung PBB menggunakan Algoritma Euclidean
int hitungPBB(int m, int n)
{
    while (n != 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m; // Ketika n menjadi 0, m adalah PBB
}

int main()
{
    int m, n;

    // Meminta input m dan n dari pengguna
    std::cout << "==== PROGRAM PENCARI PBB METODE ALGORITMA EUCLIDEAN ====";
    std::cout << "Input nilai m (Bilangan Bulat Tidak Negatif): ";
    std::cin >> m;
    std::cout << "Input nilai n (Bilangan Bulat Tidak Negatif, m >= n): ";
    std::cin >> n;

    // Melakukan pengecekan nilai m >= n
    if (m < n)
    {
        std::cout << "Nilai m harus lebih besar atau sama dengan n" << std::endl;
        return 1;
    }

    // Memanggil fungsi hitungPBB
    int pbb = hitungPBB(m, n);
    std::cout << "PBB dari " << m << " dan " << n << " adalah: " << pbb << std::endl;

    return 0;
}
