#pragma once

class WoodlandMansionPieces::SimpleGrid {

public:

    void get(int, int)const;
    void SimpleGrid(int, int, int);
    void set(int, int, int);
    void set(int, int, int, int, int);
    void setIf(int, int, int, int);
    void edgesTo(int, int, int);
};
