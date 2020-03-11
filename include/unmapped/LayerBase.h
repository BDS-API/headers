#pragma once



namespace LayerDetails {

class LayerBase {

public:
    virtual ~LayerBase();
    virtual void init(long);

    LayerBase(unsigned int);
    void initRandom(long, long)const;
    void initRandom(long, long)const;
    void _nextRandom(long &, unsigned int, long);
};

}