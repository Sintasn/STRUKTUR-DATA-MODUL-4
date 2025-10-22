#include "Playlist.h"

Lagu* head = nullptr;

void tambahDepan(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, head};
    head = baru;
}

void tambahBelakang(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};
    if (!head) head = baru;
    else {
        Lagu* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = baru;
    }
}

void tambahSetelahKe3(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};
    Lagu* temp = head;
    int posisi = 1;
    while (temp && posisi < 3) {
        temp = temp->next;
        posisi++;
    }
    if (!temp) tambahBelakang(judul, penyanyi, durasi);
    else {
        baru->next = temp->next;
        temp->next = baru;
    }
}

void hapusLagu(string judul) {
    Lagu *temp = head, *prev = nullptr;
    while (temp && temp->judul != judul) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) {
        cout << "Lagu tidak ditemukan!\n";
        return;
    }
    if (!prev) head = head->next;
    else prev->next = temp->next;
    delete temp;
    cout << "Lagu \"" << judul << "\" dihapus.\n";
}

void tampilkan() {
    if (!head) {
        cout << "Playlist kosong.\n";
        return;
    }
    int i = 1;
    Lagu* temp = head;
    while (temp) {
        cout << i++ << ". " << temp->judul << " - " << temp->penyanyi
             << " (" << temp->durasi << " menit)\n";
        temp = temp->next;
    }
}
