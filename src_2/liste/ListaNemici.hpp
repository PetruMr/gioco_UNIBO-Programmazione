#pragma once
#include "../generale/libs.hpp"

struct listaN{
    listaN *prev;
    Nemico *e;
    listaN *next;
}; typedef listaN *plistaN;

class ListaNemici {
private:
    plistaN head;
    plistaN chead;

    // bool:
    // false = head, 
    // true = chead
    bool checkEntity_p(Nemico *entity, bool b);
    void addEntita_p(Nemico *entity, bool b);
    bool removeEntita_p(Nemico *entity,bool b, bool deleteEntita);

public:
    ListaNemici();
    ~ListaNemici();

    bool checkEntity(Nemico *entity);
    void addEntita(Nemico *entity);
    bool removeEntita(Nemico *entity, bool deleteEntita);
    void deleteList();
    plistaN getList();

    bool makecList(Nemico *entity);
    plistaN getcList();
    void deletecList();

    void stampaTutte(int offsetY, int offsetX);
};