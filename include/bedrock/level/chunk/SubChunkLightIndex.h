#pragma once

#include "../../util/Pos.h"


class SubChunkLightIndex {

public:
    void computeSubChunkIndex()const;
    SubChunkLightIndex(SubChunkLightIndex const&);
    SubChunkLightIndex(Pos const&);
    void nextY()const;
    void nextZ()const;
    void nextX()const;
    void prevZ()const;
    void computeInternalIndexFromPos(Pos const&);
    void computeSubChunkCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    SubChunkLightIndex(unsigned int);
    void prevX()const;
    void computeSubChunkIndexAndCoordinates(unsigned int &, unsigned int &, unsigned int &)const;
    void prevY()const;
};
