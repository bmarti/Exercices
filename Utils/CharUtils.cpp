//
// Created by Baptiste on 04/03/2021.
//

#include <windows.h>
#include "CharUtils.h"

string toAscii(char tab[]) {
    char buffer[256];
    CharToOemA(tab, buffer);
    string str(buffer);
    return str;
}