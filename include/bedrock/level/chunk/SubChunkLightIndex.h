#pragma once

#include "../../../unmapped/Pos"


class SubChunkLightIndex {

public:

    SubChunkLightIndex(SubChunkLightIndex const&);
    SubChunkLightIndex(unsigned int);
    SubChunkLightIndex(Pos const&);
    void computeInternalIndexFromPos(Pos const&);
    void nextX()const;
    void prevX()const;
    void nextY()const;
    void prevY()const;
    void nextZ()const;
    void prevZ()const;
    void computeSubChunkIndex()const;
    void computeSubChunkCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    void computeSubChunkIndexAndCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
};
