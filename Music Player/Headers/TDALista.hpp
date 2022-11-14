//
//  TDALista.hpp
//  Music Player
//
//  Created by Jairo Aguilar on 14/11/22.
//

#ifndef TDALista_hpp
#define TDALista_hpp

#include "Object.hpp"

class TDALista {
    
    public:
        virtual void anula() = 0;
        virtual bool inserta(Object*,int) = 0;
        virtual Object* siguiente(int) = 0;
        virtual Object* anterior(int) = 0;
        virtual void append(Object*) = 0;
        virtual void imprimir_lista() = 0;
        virtual bool suprime(int) = 0;
        virtual Object* recupera(int) = 0;
        virtual int localiza(Object*) = 0;
        virtual Object* primero() = 0;
        virtual bool vacia() = 0;
};

#endif /* TDALista_hpp */
