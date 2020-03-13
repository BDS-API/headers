#pragma once



class Bounds {

public:
    class Iterator;

    Bounds(ChunkPos const&, ChunkPos const&); // _ZN6BoundsC2ERK8ChunkPosS2_
    void contains(Bounds const&)const; // _ZNK6Bounds8containsERKS_
//  Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option); //TODO: incomplete function definition // _ZN6BoundsC2ERK8BlockPosS2_iNS_6OptionE
    void gridToChunk(BlockPos const&)const; // _ZNK6Bounds11gridToChunkERK8BlockPos
    void resize(Pos const&, Pos const&); // _ZN6Bounds6resizeERK3PosS2_
    void contains(Pos const&)const; // _ZNK6Bounds8containsERK3Pos
    void begin()const; // _ZNK6Bounds5beginEv
    void end()const; // _ZNK6Bounds3endEv
    Bounds(Bounds const&); // _ZN6BoundsC2ERKS_
    void flatten(); // _ZN6Bounds7flattenEv
    Bounds(); // _ZN6BoundsC2Ev
    void operator==(Bounds const&); // _ZN6BoundseqERKS_
    void idxFromWorldPos(Pos const&)const; // _ZNK6Bounds15idxFromWorldPosERK3Pos
    void idx(Pos const&)const; // _ZNK6Bounds3idxERK3Pos
    void getCenter()const; // _ZNK6Bounds9getCenterEv
    void contains2D(BlockPos const&)const; // _ZNK6Bounds10contains2DERK8BlockPos
    void getWorldCenter2D()const; // _ZNK6Bounds16getWorldCenter2DEv
    class Iterator {

    public:
        void operator!=(Bounds::Iterator const&); // _ZN6Bounds8IteratorneERKS0_
        void operator*(); // _ZN6Bounds8IteratordeEv
        Iterator(Bounds const&, int); // _ZN6Bounds8IteratorC2ERKS_i
        void index(); // _ZN6Bounds8Iterator5indexEv
    };
};
