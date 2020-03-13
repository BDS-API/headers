#pragma once



class BlockVolume {

public:
    class BlockVolumeIter;

    void block(unsigned int); // _ZN11BlockVolume5blockEj
    void block(ChunkBlockPos const&); // _ZN11BlockVolume5blockERK13ChunkBlockPos
//  BlockVolume(buffer_span_mut<long>, int, int, int, Block const&); //TODO: incomplete function definition // _ZN11BlockVolumeC2E15buffer_span_mutIlEiiiRK5Block
    void getVolume()const; // _ZNK11BlockVolume9getVolumeEv
    void getWidth()const; // _ZNK11BlockVolume8getWidthEv
    void getHeight()const; // _ZNK11BlockVolume9getHeightEv
    void getDepth()const; // _ZNK11BlockVolume8getDepthEv
    void getDimensions()const; // _ZNK11BlockVolume13getDimensionsEv
    void begin(); // _ZN11BlockVolume5beginEv
    void end(); // _ZN11BlockVolume3endEv
    void index(Pos const&)const; // _ZNK11BlockVolume5indexERK3Pos
    void index(ChunkBlockPos const&)const; // _ZNK11BlockVolume5indexERK13ChunkBlockPos
    bool isInBounds(Pos const&)const; // _ZNK11BlockVolume10isInBoundsERK3Pos
    bool isInBounds(ChunkBlockPos const&)const; // _ZNK11BlockVolume10isInBoundsERK13ChunkBlockPos
    bool isInBounds(unsigned int)const; // _ZNK11BlockVolume10isInBoundsEj
    void getAboveTopSolidBlock(ChunkBlockPos const&, bool, bool, bool)const; // _ZNK11BlockVolume21getAboveTopSolidBlockERK13ChunkBlockPosbbb
    void computeHeightMap()const; // _ZNK11BlockVolume16computeHeightMapEv
    void block(Pos const&); // _ZN11BlockVolume5blockERK3Pos
    class BlockVolumeIter {

    public:
        void _incrementPos(); // _ZN11BlockVolume15BlockVolumeIter13_incrementPosEv
        void operator!=(BlockVolume::BlockVolumeIter const&)const; // _ZNK11BlockVolume15BlockVolumeIterneERKS0_
        void operator==(BlockVolume::BlockVolumeIter const&)const; // _ZNK11BlockVolume15BlockVolumeItereqERKS0_
        void operator*(); // _ZN11BlockVolume15BlockVolumeIterdeEv
    };
};
