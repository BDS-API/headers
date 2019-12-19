#pragma once

class MineshaftStart : StructureStart {

public:
    virtual MineshaftStart::~MineshaftStart();
    virtual void getType(void)const;

    MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
