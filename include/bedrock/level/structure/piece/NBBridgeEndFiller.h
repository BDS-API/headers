#pragma once

#include <memory>
#include "../../../util/Random.h"
#include "./StructurePiece.h"
#include "./NetherFortressPiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include <vector>
#include "../../../../unmapped/BoundingBox.h"


class NBBridgeEndFiller : NetherFortressPiece {

public:
    virtual ~NBBridgeEndFiller();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeEndFiller();
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
};
