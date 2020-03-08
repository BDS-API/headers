#pragma once



using namespace WoodlandMansionPieces;

class SimpleGrid {

public:

    void get(int, int)const;
    SimpleGrid(int, int, int);
    void set(int, int, int);
    void set(int, int, int, int, int);
    void setIf(int, int, int, int);
    bool edgesTo(int, int, int);
};
