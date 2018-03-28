#ifndef FIRNA_171511040_H_INCLUDED
#define FIRNA_171511040_H_INCLUDED

#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <MMSystem.h>
#include "Ali_171511035.h"

void Controller_Menu_Utama(int *Action, boolean *Cek_Sound); //modul untuk mengatur alur tombol ketika di klik
void Main_Menu(int *Action, boolean *Cek_Sound); //modul untuk menampilkan menu utama
void Random (int Puzzle_Size); //modul untuk me random puzzle
void Victory(int *Valid, int *Win, int Puzzle_Size); //modul untuk mengecek apakah sudah bisa dipastikan menang/tidak
void Cheats (int Puzzle_Size); //modul untuk mempermudah perpindahan puzzle
void Sound_Cek(boolean *Cek_Sound); //modul  untuk cek tombol sedang tertekan atau tidak
#endif
