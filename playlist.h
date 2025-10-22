#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <iostream>
#include <string>
using namespace std;

struct Lagu {
    string judul, penyanyi;
    float durasi;
    Lagu* next;
};

void tambahDepan(string judul, string penyanyi, float durasi);
void tambahBelakang(string judul, string penyanyi, float durasi);
void tambahSetelahKe3(string judul, string penyanyi, float durasi);
void hapusLagu(string judul);
void tampilkan();

#endif
