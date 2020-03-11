#pragma once

#include "./BoundingBox.h"


class BiomeArea {

public:

    ~BiomeArea();
    void at(unsigned int, unsigned int)const;
    void at(unsigned int, unsigned int);
    BiomeArea(BoundingBox const&, unsigned int);
};
