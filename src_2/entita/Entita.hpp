#pragma once
#include "../generale/libs.hpp"

class Entita {
public:
    // Punti salute
    int life;
    int current_life;
    // Coordinate
    int x, y;
    // Dimensioni hitbox
    int dim_x, dim_y;
    // Matrice che contiene il contenuto da stampare per rappresentare l'entità
    cchar_t ** stampabile;

    // Per poterlo animare e in generale fargli fare cose ogni n tempo
    long long int lastTick;
    long long int ticksForAction;

    long long int passedActions; // Basato su ticksForAction

public:
    Entita();
    Entita(int life, int y,int x, int dim_y, int dim_x, cchar_t ** stampa);
    ~Entita();

    void stampa(int offsetY, int offsetX);
    
    bool controllaContatto(Entita * entita);

    void updateTicks();

    void modificaCoordinate(int new_y, int new_x);
    void incrementaX(int amount);
    void incrementaY(int amount);
};