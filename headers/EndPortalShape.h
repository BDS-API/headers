#pragma once

class EndPortalShape {

public:

    void EndPortalShape(BlockSource &, BlockPos);
    void getDistanceUntilEdge(BlockPos const&, int, int);
    bool isValid(BlockSource &);
    void getOrigin(void)const;
};
