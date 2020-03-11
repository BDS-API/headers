#pragma once

#include "./Bounds.h"
#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/util/BlockPos.h"
#include "./Pos.h"


class Bounds {

public:

    Bounds(ChunkPos const&, ChunkPos const&);
    void contains(Bounds const&)const;
//  Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option); //TODO: incomplete function definition
    void gridToChunk(BlockPos const&)const;
    void resize(Pos const&, Pos const&);
    void contains(Pos const&)const;
    void begin()const;
    void end()const;
    Bounds(Bounds const&);
    void flatten();
    Bounds();
    void operator==(Bounds const&);
    void idxFromWorldPos(Pos const&)const;
    void idx(Pos const&)const;
    void getCenter()const;
    void contains2D(BlockPos const&)const;
    void getWorldCenter2D()const;
};
