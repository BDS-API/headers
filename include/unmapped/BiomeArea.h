#pragma once



class BiomeArea {

public:
    ~BiomeArea();
    void at(unsigned int, unsigned int);
    void at(unsigned int, unsigned int)const;
    BiomeArea(BoundingBox const&, unsigned int);
};
