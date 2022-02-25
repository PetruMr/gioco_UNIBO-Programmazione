/**
 * @file Entita.hpp
 * @author Petru Marcel Marincas
 * @brief Super-classe per il presonaggio, i nemici, i proiettili e le altre entità del gioco
 * @version 0.1
 * @date 2022-02-07
 */

class Entita {
protected:
    // Coordinate
    int x, y;
    // Dimensioni hitbox
    int dim_x, dim_y;
    // Matrice che contiene il contenuto da stampare per rappresentare l'entità
    char ** stampabile;

    int attr;   // Posso fare | tra gli attributi che voglio e salvarli come int
    int color;  // Uno dei diversi colori che definisco

public:
    Entita(int x,int y, int dim_x, int dim_y, int attr, int color, char ** stampa);

    void stampa(WINDOW * window, int offsetX, int offsetY);
    
    bool controllaContatto(Entita entita);
    bool controllaContattore(/*Mappa*/);

    void modificaCoordinate(int new_x, int new_y);
    void incrementaX(int amount);
    void incrementaY(int amount);

    void incrementaX_CC(Entita * arrayEntita, /*Mappa*/ int amount);
    void incrementaY_CC(Entita * arrayEntita, /*Mappa*/ int amount);
};