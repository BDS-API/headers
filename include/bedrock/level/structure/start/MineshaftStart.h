#pragma once

#include "../../../util/Random"
#include "../../../util/ChunkPos"
#include "../../../../unmapped/BiomeSource"


class MineshaftStart : StructureStart {

public:
    virtual MineshaftStart::~MineshaftStart()
    virtual void getType()const;

    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
