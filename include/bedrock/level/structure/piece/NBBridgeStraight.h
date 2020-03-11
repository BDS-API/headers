#pragma once

#include <memory>
#include "../../../util/Random.h"
#include "./StructurePiece.h"
#include "./NetherFortressPiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include <vector>
#include "../../../../unmapped/BoundingBox.h"


class NBBridgeStraight : NetherFortressPiece {

public:
    virtual ~NBBridgeStraight();
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    NBBridgeStraight();
    NBBridgeStraight(int, BoundingBox const&, int);
};
