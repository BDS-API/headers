#pragma once



namespace LayerDetails {

    class LayerBase {

    public:
        ~LayerBase(); // _ZN12LayerDetails9LayerBaseD2Ev
        virtual void init(long); // _ZN12LayerDetails9LayerBase4initEl
        LayerBase(unsigned int); // _ZN12LayerDetails9LayerBaseC2Ej
        void initRandom(long, long)const; // _ZNK12LayerDetails9LayerBase10initRandomEll
        void initRandom(long, long)const; // _ZZNK12LayerDetails9LayerBase10initRandomEllENKUlRljE_clES1_j
        void _nextRandom(long &, unsigned int, long); // _ZN12LayerDetails9LayerBase11_nextRandomERljl
    };
}
