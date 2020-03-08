#pragma once



class BlockVolume {

public:

    void block(unsigned int);
    void block(ChunkBlockPos const&);
    BlockVolume(buffer_span_mut<long>, int, int, int, Block const&);
    void getVolume(void)const;
    void getWidth(void)const;
    void getHeight(void)const;
    void getDepth(void)const;
    void getDimensions(void)const;
    void begin(void);
    void end(void);
    void index(Pos const&)const;
    void index(ChunkBlockPos const&)const;
    bool isInBounds(Pos const&)const;
    bool isInBounds(ChunkBlockPos const&)const;
    bool isInBounds(unsigned int)const;
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)const;
    void computeHeightMap(void)const;
    void block(Pos const&);
};
