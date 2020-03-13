#pragma once

#include "StructureStart.h"


class MineshaftStart : StructureStart {

public:
    ~MineshaftStart(); // _ZN14MineshaftStartD2Ev
    virtual void getType()const; // _ZNK14MineshaftStart7getTypeEv
    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short); // _ZN14MineshaftStartC2ER11BiomeSourceR6RandomRK8ChunkPoss
    void _moveToSurface(short); // _ZN14MineshaftStart14_moveToSurfaceEs
};
