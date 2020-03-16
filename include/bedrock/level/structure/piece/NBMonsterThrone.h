#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBMonsterThrone : public NetherFortressPiece {

public:
    virtual ~NBMonsterThrone(); // _ZN15NBMonsterThroneD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK15NBMonsterThrone7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN15NBMonsterThrone11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int); // _ZN15NBMonsterThrone11createPieceERSt6vectorISt10unique_ptrI14StructurePieceSt14default_deleteIS2_EESaIS5_EER6Randomiiiii
    NBMonsterThrone(); // _ZN15NBMonsterThroneC2Ev
    NBMonsterThrone(int, BoundingBox const&, int); // _ZN15NBMonsterThroneC2EiRK11BoundingBoxi
};
