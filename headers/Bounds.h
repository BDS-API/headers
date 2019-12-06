#pragma once

class Bounds {

public:

    void Bounds(ChunkPos const&, ChunkPos const&);
    void contains(Bounds const&)const;
    void Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option);
    void gridToChunk(BlockPos const&)const;
    void resize(Pos const&, Pos const&);
    void contains(Pos const&)const;
    void begin(void)const;
    void end(void)const;
    void Bounds(Bounds const&);
    void flatten(void);
    void Bounds(void);
    void idxFromWorldPos(Pos const&)const;
    void idx(Pos const&)const;
    void getCenter(void)const;
    void contains2D(BlockPos const&)const;
    void getWorldCenter2D(void)const;
};
