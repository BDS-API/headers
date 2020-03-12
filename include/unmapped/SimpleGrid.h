#pragma once



namespace WoodlandMansionPieces {

    class SimpleGrid {

    public:
        void set(int, int, int, int, int);
        void setIf(int, int, int, int);
        void set(int, int, int);
        void get(int, int)const;
        bool edgesTo(int, int, int);
        ~SimpleGrid();
        SimpleGrid(int, int, int);
    };
}
