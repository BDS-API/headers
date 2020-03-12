#pragma once



namespace WoodlandMansionPieces {

    class SimpleGrid {

    public:
        void set(int, int, int);
        void set(int, int, int, int, int);
        void get(int, int)const;
        void setIf(int, int, int, int);
        bool edgesTo(int, int, int);
        ~SimpleGrid();
        SimpleGrid(int, int, int);
    };
}
