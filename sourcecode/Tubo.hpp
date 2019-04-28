#ifndef TUBO_HPP
#define TUBO_HPP

#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/keyboard.h>
#include <string>
   using namespace std;
    
class Tubo{
protected:
    string pathPng; int tipoTubo; int cont; int dirAcqua;
    bool acqua;
    int Riga;  int Colonna;
public:
     Tubo();
     Tubo(int);
    virtual void AumentaCont();
    virtual ~Tubo(){};
    void SetCoordinate(int,int);
    virtual string getPath();
     int getTipoTubo();
    int getCont();
    int getDirAcqua();
    bool getAcqua();
    int getRiga();
    int getColonna();
}; //fine classe










#endif