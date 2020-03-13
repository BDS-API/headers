#pragma once

#include "NetherFortressPiece.h"
#include <vector>


class NBMonsterThrone : NetherFortressPiece {

public:
    ~NBMonsterThrone(); // _ZN15NBMonsterThroneD2Ev
    virtual void getType()const; // _ZNK15NBMonsterThrone7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN15NBMonsterThrone11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN15NBMonsterThrone11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBMonsterThrone(); // _ZN15NBMonsterThroneC2Ev
    NBMonsterThrone(int, BoundingBox const&, int); // _ZN15NBMonsterThroneC2EiRK11BoundingBoxi
};
