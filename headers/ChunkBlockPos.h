#pragma once

class ChunkBlockPos {

public:

    void ChunkBlockPos(void);
    void index2D(void)const;
    void ChunkBlockPos(unsigned char);
    void ChunkBlockPos(unsigned char, short, unsigned char);
    void ChunkBlockPos(BlockPos const&);
    void fromIndex(unsigned short);
    void above(void)const;
    void below(void)const;
    void hashCode(void)const;
    void neighbor(Facing::Name)const;
};
