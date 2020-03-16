#pragma once

#include "StructureStart.h"


class MineshaftStart : public StructureStart {

public:
    virtual ~MineshaftStart(); // _ZN14MineshaftStartD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK14MineshaftStart7getTypeEv
    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short); // _ZN14MineshaftStartC2ER11BiomeSourceR6RandomRK8ChunkPoss
    void _moveToSurface(short); // _ZN14MineshaftStart14_moveToSurfaceEs
};
