#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/MineshaftData"


class MineshaftPiece : StructurePiece {

public:
    virtual MineshaftPiece::~MineshaftPiece()

    void createRandomShaftPiece(MineshaftData &, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generateAndAddPiece(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void _isSupportingBox(int, int, BlockSource *, int, int);
    MineshaftPiece(int, MineshaftData &);
};
