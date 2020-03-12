#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Pos.h"
#include "../../../unmapped/ChunkBlockPos.h"


class BlockVolume {

public:
    class BlockVolumeIter;

    void begin();
//  BlockVolume(buffer_span_mut<long>, int, int, int, Block const&); //TODO: incomplete function definition
    void block(Pos const&);
    void block(ChunkBlockPos const&);
    bool isInBounds(unsigned int)const;
    void block(unsigned int);
    void end();
    void getDepth()const;
    void index(ChunkBlockPos const&)const;
    void getHeight()const;
    bool isInBounds(Pos const&)const;
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)const;
    void index(Pos const&)const;
    bool isInBounds(ChunkBlockPos const&)const;
    void getVolume()const;
    void getWidth()const;
    void computeHeightMap()const;
    void getDimensions()const;
    class BlockVolumeIter {

    public:
        void _incrementPos();
        void operator==(BlockVolume::BlockVolumeIter const&)const;
        void operator!=(BlockVolume::BlockVolumeIter const&)const;
        void operator*();
    };
};
