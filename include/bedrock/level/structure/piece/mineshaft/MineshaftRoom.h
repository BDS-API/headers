#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftRoom : MineshaftPiece {

public:
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~MineshaftRoom();
    virtual void moveBoundingBox(int, int, int);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    MineshaftRoom(MineshaftData &);
    MineshaftRoom(MineshaftData &, int, Random &, int, int);
};
