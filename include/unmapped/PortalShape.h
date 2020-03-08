#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"


class PortalShape {

public:

    PortalShape(BlockSource const&, BlockPos const&, PortalAxis);
    void evaluate(BlockPos const&, BlockSource const&);
    void _isEmptyBlock(Block const&)const;
    void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const;
    void _calculatePortalHeight(BlockSource const&);
    void setAxis(PortalAxis);
    void getHeight()const;
    void getWidth()const;
    void getNumberOfPortalBlocks()const;
    bool isValid()const;
    bool isFilled()const;
    void createRecord()const;
    void _getIdentifierBlockPos()const;
    void createPortalBlocks(WorldChangeTransaction &)const;
    void updateNeighboringBlocks(BlockSource &, Vec3 const&)const;
};
