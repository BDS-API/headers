#pragma once



class SubChunkLightIndex {

public:
    void prevY()const;
    void computeSubChunkIndexAndCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    void prevZ()const;
    SubChunkLightIndex(unsigned int);
    void computeSubChunkIndex()const;
    SubChunkLightIndex(Pos const&);
    void nextX()const;
    void nextZ()const;
    void computeSubChunkCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    void computeInternalIndexFromPos(Pos const&);
    void prevX()const;
    SubChunkLightIndex(SubChunkLightIndex const&);
    void nextY()const;
};
