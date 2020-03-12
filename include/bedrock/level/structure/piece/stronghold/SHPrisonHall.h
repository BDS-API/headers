#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHPrisonHall : StrongholdPiece {

public:
    ~SHPrisonHall();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    SHPrisonHall();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHPrisonHall(int, Random &, BoundingBox const&, int);
};
