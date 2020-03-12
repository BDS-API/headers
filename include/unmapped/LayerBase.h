#pragma once



namespace LayerDetails {

    class LayerBase {

    public:
        virtual void init(long);
        ~LayerBase();
        LayerBase(unsigned int);
        void _nextRandom(long &, unsigned int, long);
        void initRandom(long, long)const;
        void initRandom(long, long)const;
    };
}
