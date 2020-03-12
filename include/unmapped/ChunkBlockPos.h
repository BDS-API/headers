#pragma once



class ChunkBlockPos {

public:
    ChunkBlockPos(BlockPos const&);
    ChunkBlockPos(unsigned char);
    void operator+(BlockPos const&)const;
    void below()const;
    void fromIndex(unsigned short);
    void index2D()const;
    ChunkBlockPos(unsigned char, short, unsigned char);
//  void neighbor(Facing::Name)const; //TODO: incomplete function definition
    void operator==(ChunkBlockPos const&)const;
    ChunkBlockPos();
    void hashCode()const;
    void above()const;
};
