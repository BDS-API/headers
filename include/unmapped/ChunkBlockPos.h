#pragma once



class ChunkBlockPos {

public:

    ChunkBlockPos(void);
    void index2D(void)const;
    ChunkBlockPos(unsigned char);
    ChunkBlockPos(unsigned char, short, unsigned char);
    ChunkBlockPos(BlockPos const&);
    void fromIndex(unsigned short);
    void above(void)const;
    void below(void)const;
    void hashCode(void)const;
    void neighbor(Facing::Name)const;
};
