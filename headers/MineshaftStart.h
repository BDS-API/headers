#pragma once

class MineshaftStart : StructureStart {

public:
    virtual ~MineshaftStart();
    virtual void getType(void)const;

    void MineshaftStart(BiomeSource &, Random &, ChunkPos const&, short);
    void _moveToSurface(short);
};
