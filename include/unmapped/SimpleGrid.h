#pragma once



namespace WoodlandMansionPieces {

    class SimpleGrid {

    public:
        void get(int, int)const; // _ZNK21WoodlandMansionPieces10SimpleGrid3getEii
        SimpleGrid(int, int, int); // _ZN21WoodlandMansionPieces10SimpleGridC2Eiii
        void set(int, int, int); // _ZN21WoodlandMansionPieces10SimpleGrid3setEiii
        void set(int, int, int, int, int); // _ZN21WoodlandMansionPieces10SimpleGrid3setEiiiii
        void setIf(int, int, int, int); // _ZN21WoodlandMansionPieces10SimpleGrid5setIfEiiii
        bool edgesTo(int, int, int); // _ZN21WoodlandMansionPieces10SimpleGrid7edgesToEiii
        ~SimpleGrid(); // _ZN21WoodlandMansionPieces10SimpleGridD2Ev
    };
}
