#pragma once



class BiomeArea {

public:

    void at(unsigned int, unsigned int)const;
    void at(unsigned int, unsigned int);
    BiomeArea(BoundingBox const&, unsigned int);
};
