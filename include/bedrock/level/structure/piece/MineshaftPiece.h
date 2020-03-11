#pragma once

#include <memory>
#include "../../../util/Random.h"
#include "../../../../unmapped/MineshaftData.h"
#include "./StructurePiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include <vector>


class MineshaftPiece : StructurePiece {

public:
    virtual ~MineshaftPiece();

    void createRandomShaftPiece(MineshaftData &, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generateAndAddPiece(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void _isSupportingBox(int, int, BlockSource *, int, int);
    MineshaftPiece(int, MineshaftData &);
};
