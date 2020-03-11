#pragma once

#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../../unmapped/BiomeSource.h"
#include "../../../util/ChunkPos.h"


class MineshaftStart : StructureStart {

public:
    virtual ~MineshaftStart();
    virtual void getType()const;

    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
