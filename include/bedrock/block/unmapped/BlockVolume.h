#pragma once

#include "../../../unmapped/Pos"
#include "../../../unmapped/ChunkBlockPos"
#include "../../../unmapped/Block"


class BlockVolume {

public:

    void block(unsigned int);
    void block(ChunkBlockPos const&);
    BlockVolume(buffer_span_mut<long>, int, int, int, Block const&);
    void getVolume()const;
    void getWidth()const;
    void getHeight()const;
    void getDepth()const;
    void getDimensions()const;
    void begin();
    void end();
    void index(Pos const&)const;
    void index(ChunkBlockPos const&)const;
    bool isInBounds(Pos const&)const;
    bool isInBounds(ChunkBlockPos const&)const;
    bool isInBounds(unsigned int)const;
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)const;
    void computeHeightMap()const;
    void block(Pos const&);
};
