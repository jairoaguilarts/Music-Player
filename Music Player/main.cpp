//
//  main.cpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#include "ArrayList.hpp"
#include "Genero.hpp"
#include "GeneroFileF.hpp"
#include "GeneroFileV.hpp"
#include "PlayListFileF.hpp"
#include "PlayListFileV.hpp"
#include "SongInfoFileF.hpp"
#include "SongInfoFileV.hpp"
#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    GeneroFileF* file = new GeneroFileF("Genero.txt");
    
    delete file;
    return 0;
}
