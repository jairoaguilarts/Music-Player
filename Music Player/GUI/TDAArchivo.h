#ifndef TDAARCHIVO_H
#define TDAARCHIVO_H

#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
using namespace std;

class TDAArchivo {

    protected:

        char* data;
        int size;
        string fileName;
        fstream *file = nullptr;

    public:

        TDAArchivo(char*, int, string);
        TDAArchivo(string);
        ~TDAArchivo();

        void setData(char*);
        char* getData();
        void setSize(int);
        int getSize();
        void setFileName(string);
        string getFileName();

        void cerrar();
        bool abrir();

        virtual bool escribir() = 0;
        virtual bool leer() = 0;

};


#endif // TDAARCHIVO_H
