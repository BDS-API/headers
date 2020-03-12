#pragma once



class Bounds {

public:
    class Iterator;

    Bounds(ChunkPos const&, ChunkPos const&);
//  Bounds(BlockPos const&, BlockPos const&, int, Bounds::Option); //TODO: incomplete function definition
    void end()const;
    void operator==(Bounds const&);
    void flatten();
    void idx(Pos const&)const;
    void getWorldCenter2D()const;
    void contains(Bounds const&)const;
    Bounds();
    void contains(Pos const&)const;
    void idxFromWorldPos(Pos const&)const;
    void begin()const;
    void gridToChunk(BlockPos const&)const;
    void contains2D(BlockPos const&)const;
    void resize(Pos const&, Pos const&);
    void getCenter()const;
    Bounds(Bounds const&);
    class Iterator {

    public:
        Iterator(Bounds const&, int);
        void operator*();
        void operator!=(Bounds::Iterator const&);
        void index();
    };
};
