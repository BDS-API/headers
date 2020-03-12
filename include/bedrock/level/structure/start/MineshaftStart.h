#pragma once

#include "StructureStart.h"


class MineshaftStart : StructureStart {

public:
    virtual void getType()const;
    ~MineshaftStart();
    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
