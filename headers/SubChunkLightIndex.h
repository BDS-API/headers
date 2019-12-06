#pragma once

class SubChunkLightIndex {

public:

    void SubChunkLightIndex(SubChunkLightIndex const&);
    void SubChunkLightIndex(unsigned int);
    void SubChunkLightIndex(Pos const&);
    void computeInternalIndexFromPos(Pos const&);
    void nextX(void)const;
    void prevX(void)const;
    void nextY(void)const;
    void prevY(void)const;
    void nextZ(void)const;
    void prevZ(void)const;
    void computeSubChunkIndex(void)const;
    void computeSubChunkCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    void computeSubChunkIndexAndCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
};
