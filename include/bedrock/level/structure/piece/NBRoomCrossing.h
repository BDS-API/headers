#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBRoomCrossing : NetherFortressPiece {

public:
    ~NBRoomCrossing();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    NBRoomCrossing(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBRoomCrossing();
};
