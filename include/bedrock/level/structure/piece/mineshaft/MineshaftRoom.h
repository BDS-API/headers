#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../util/Random.h"
#include <memory>
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../StructurePiece.h"
#include <vector>


class MineshaftRoom : MineshaftPiece {

public:
    virtual ~MineshaftRoom();
    virtual void moveBoundingBox(int, int, int);
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    MineshaftRoom(MineshaftData &);
    MineshaftRoom(MineshaftData &, int, Random &, int, int);
};
