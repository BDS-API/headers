#pragma once

#include "StructurePiece.h"
#include <vector>


class MineshaftPiece : StructurePiece {

public:
    ~MineshaftPiece();
    void _isSupportingBox(int, int, BlockSource *, int, int);
    void generateAndAddPiece(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    void createRandomShaftPiece(MineshaftData &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    MineshaftPiece(int, MineshaftData &);
};
