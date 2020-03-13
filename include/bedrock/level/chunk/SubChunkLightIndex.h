#pragma once



class SubChunkLightIndex {

public:
    SubChunkLightIndex(SubChunkLightIndex const&); // _ZN18SubChunkLightIndexC2ERKS_
    SubChunkLightIndex(unsigned int); // _ZN18SubChunkLightIndexC2Ej
    SubChunkLightIndex(Pos const&); // _ZN18SubChunkLightIndexC2ERK3Pos
    void computeInternalIndexFromPos(Pos const&); // _ZN18SubChunkLightIndex27computeInternalIndexFromPosERK3Pos
    void nextX()const; // _ZNK18SubChunkLightIndex5nextXEv
    void prevX()const; // _ZNK18SubChunkLightIndex5prevXEv
    void nextY()const; // _ZNK18SubChunkLightIndex5nextYEv
    void prevY()const; // _ZNK18SubChunkLightIndex5prevYEv
    void nextZ()const; // _ZNK18SubChunkLightIndex5nextZEv
    void prevZ()const; // _ZNK18SubChunkLightIndex5prevZEv
    void computeSubChunkIndex()const; // _ZNK18SubChunkLightIndex20computeSubChunkIndexEv
    void computeSubChunkCoordinates(unsigned int &, unsigned int &, unsigned int &)const; // _ZNK18SubChunkLightIndex26computeSubChunkCoordinatesERjS0_S0_
    void computeSubChunkIndexAndCoordinates(unsigned int &, unsigned int &, unsigned int &)const; // _ZNK18SubChunkLightIndex34computeSubChunkIndexAndCoordinatesERjS0_S0_
};
