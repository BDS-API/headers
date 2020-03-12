#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "../../../../unmapped/MineshaftData.h"


class MineshaftPiece : StructurePiece {

public:
    ~MineshaftPiece();
    void createRandomShaftPiece(MineshaftData &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    MineshaftPiece(int, MineshaftData &);
    void _isSupportingBox(int, int, BlockSource *, int, int);
    void generateAndAddPiece(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
