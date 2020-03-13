#pragma once

#include "StructurePiece.h"
#include <vector>


class MineshaftPiece : StructurePiece {

public:
    ~MineshaftPiece(); // _ZN14MineshaftPieceD2Ev
    void createRandomShaftPiece(MineshaftData &, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN14MineshaftPiece22createRandomShaftPieceER13MineshaftDataRSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS4_EESaIS7_EER6Randomiiiii
    void generateAndAddPiece(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN14MineshaftPiece19generateAndAddPieceEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Randomiiiii
    void _isSupportingBox(int, int, BlockSource *, int, int); // _ZN14MineshaftPiece16_isSupportingBoxEiiP11BlockSourceii
    MineshaftPiece(int, MineshaftData &); // _ZN14MineshaftPieceC2EiR13MineshaftData
};
