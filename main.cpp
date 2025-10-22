#include "playlist.h"
#include "playlist.cpp"

int main() {
    int pilih;
    string judul, penyanyi;
    float durasi;

    do {
        cout << "\n=== MENU PLAYLIST ===\n";
        cout << "1. Tambah di awal\n";
        cout << "2. Tambah di akhir\n";
        cout << "3. Tambah setelah ke-3\n";
        cout << "4. Hapus lagu\n";
        cout << "5. Tampilkan\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;
        cin.ignore();

        switch (pilih) {
            case 1:
                cout << "Judul: "; getline(cin, judul);
                cout << "Penyanyi: "; getline(cin, penyanyi);
                cout << "Durasi: "; cin >> durasi;
                tambahDepan(judul, penyanyi, durasi);
                break;
            case 2:
                cout << "Judul: "; getline(cin, judul);
                cout << "Penyanyi: "; getline(cin, penyanyi);
                cout << "Durasi: "; cin >> durasi;
                tambahBelakang(judul, penyanyi, durasi);
                break;
            case 3:
                cout << "Judul: "; getline(cin, judul);
                cout << "Penyanyi: "; getline(cin, penyanyi);
                cout << "Durasi: "; cin >> durasi;
                tambahSetelahKe3(judul, penyanyi, durasi);
                break;
            case 4:
                cout << "Judul lagu yang dihapus: ";
                getline(cin, judul);
                hapusLagu(judul);
                break;
            case 5:
                tampilkan();
                break;
        }
    } while (pilih != 0);
}
