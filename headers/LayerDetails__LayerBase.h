#pragma once

class LayerDetails::LayerBase {

public:
    virtual ~LayerBase();
    virtual void init(long);

    void LayerBase(unsigned int);
    void initRandom(long, long)const;
    void initRandom(long, long)::{lambda(long &, unsigned int)#1}::operator() const(long &, unsigned int)const;
    void _nextRandom(long &, unsigned int, long);
};
