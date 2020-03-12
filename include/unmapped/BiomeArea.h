#pragma once

#include "BoundingBox.h"


class BiomeArea {

public:
    void at(unsigned int, unsigned int);
    void at(unsigned int, unsigned int)const;
    ~BiomeArea();
    BiomeArea(BoundingBox const&, unsigned int);
};
