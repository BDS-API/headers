#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBMonsterThrone : NetherFortressPiece {

public:
    ~NBMonsterThrone();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBMonsterThrone(int, BoundingBox const&, int);
    NBMonsterThrone();
};
