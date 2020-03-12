#pragma once



class BlockVolume {

public:
    class BlockVolumeIter;

    bool isInBounds(unsigned int)const;
    void getDepth()const;
    void computeHeightMap()const;
//  BlockVolume(buffer_span_mut<long>, int, int, int, Block const&); //TODO: incomplete function definition
    bool isInBounds(Pos const&)const;
    void index(Pos const&)const;
    bool isInBounds(ChunkBlockPos const&)const;
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)const;
    void getWidth()const;
    void block(unsigned int);
    void getDimensions()const;
    void end();
    void getHeight()const;
    void block(ChunkBlockPos const&);
    void index(ChunkBlockPos const&)const;
    void getVolume()const;
    void block(Pos const&);
    void begin();
    class BlockVolumeIter {

    public:
        void operator==(BlockVolume::BlockVolumeIter const&)const;
        void operator*();
        void _incrementPos();
        void operator!=(BlockVolume::BlockVolumeIter const&)const;
    };
};
