#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHLibrary : StrongholdPiece {

public:
    ~SHLibrary(); // _ZN9SHLibraryD2Ev
    virtual void getType()const; // _ZNK9SHLibrary7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN9SHLibrary11addChildrenEP14StructurePieceRSt6vectorISt10unique_ptrIS0_St14default_deleteIS0_EESaIS6_EER6Random
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN9SHLibrary11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN9SHLibrary11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    SHLibrary(); // _ZN9SHLibraryC2Ev
    SHLibrary(int, Random &, BoundingBox const&, int); // _ZN9SHLibraryC2EiR6RandomRK11BoundingBoxi
};
