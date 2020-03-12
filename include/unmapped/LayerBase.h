#pragma once



namespace LayerDetails {

    class LayerBase {

    public:
        virtual void init(long);
        ~LayerBase();
        void _nextRandom(long &, unsigned int, long);
        void initRandom(long, long)const;
        void initRandom(long, long)const;
        LayerBase(unsigned int);
    };
}
