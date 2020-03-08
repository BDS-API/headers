#pragma once

#include "../../../../unmapped/BiomeSource"
#include "../../../util/ChunkPos"
#include "../../../util/Random"


class MineshaftStart : StructureStart {

public:
    MineshaftStart::~MineshaftStart()
    virtual void getType()const;

    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
