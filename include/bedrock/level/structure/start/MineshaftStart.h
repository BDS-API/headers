#pragma once

#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class MineshaftStart : StructureStart {

public:
    ~MineshaftStart();
    virtual void getType()const;
    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
