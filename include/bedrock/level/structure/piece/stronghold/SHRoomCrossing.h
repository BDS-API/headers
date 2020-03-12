#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHRoomCrossing : StrongholdPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHRoomCrossing();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    SHRoomCrossing();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHRoomCrossing(int, Random &, BoundingBox const&, int);
};
