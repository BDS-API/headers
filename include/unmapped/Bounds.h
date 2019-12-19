#pragma once

class Bounds {

public:

    Bounds(ChunkPos const&, ChunkPos const&);
    void contains(Bounds const&)const;
    Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option);
    void gridToChunk(BlockPos const&)const;
    void resize(Pos const&, Pos const&);
    void contains(Pos const&)const;
    void begin(void)const;
    void end(void)const;
    Bounds(Bounds const&);
    void flatten(void);
    Bounds(void);
    void idxFromWorldPos(Pos const&)const;
    void idx(Pos const&)const;
    void getCenter(void)const;
    void contains2D(BlockPos const&)const;
    void getWorldCenter2D(void)const;
};
