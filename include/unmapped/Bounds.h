#pragma once

#include "../bedrock/util/ChunkPos.h"
#include "../bedrock/util/Pos.h"
#include "../bedrock/util/BlockPos.h"


class Bounds {

public:
    class Iterator;

    Bounds(ChunkPos const&, ChunkPos const&);
    void gridToChunk(BlockPos const&)const;
    void idx(Pos const&)const;
    void getCenter()const;
    Bounds(Bounds const&);
    void resize(Pos const&, Pos const&);
    void begin()const;
    void end()const;
    void contains(Bounds const&)const;
    void contains2D(BlockPos const&)const;
//  Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option); //TODO: incomplete function definition
    void flatten();
    void getWorldCenter2D()const;
    Bounds();
    void operator==(Bounds const&);
    void contains(Pos const&)const;
    void idxFromWorldPos(Pos const&)const;
    class Iterator {

    public:
        void operator!=(Bounds::Iterator const&);
        void index();
        void operator*();
        Iterator(Bounds const&, int);
    };
};
