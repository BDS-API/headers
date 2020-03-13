#pragma once

#include "../bedrock/util/BlockPos.h"


class EndPortalShape {

public:
    ~EndPortalShape(); // _ZN14EndPortalShapeD2Ev
    EndPortalShape(BlockSource &, BlockPos); // _ZN14EndPortalShapeC2ER11BlockSource8BlockPos
    void getDistanceUntilEdge(BlockPos const&, int, int); // _ZN14EndPortalShape20getDistanceUntilEdgeERK8BlockPosii
    bool isValid(BlockSource &); // _ZN14EndPortalShape7isValidER11BlockSource
    void getOrigin()const; // _ZNK14EndPortalShape9getOriginEv
};
