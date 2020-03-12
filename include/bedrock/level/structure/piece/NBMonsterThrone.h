#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBMonsterThrone : NetherFortressPiece {

public:
    virtual void getType()const;
    ~NBMonsterThrone();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBMonsterThrone(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBMonsterThrone();
};
