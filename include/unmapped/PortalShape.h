#pragma once

#include "WorldChangeTransaction.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"


class PortalShape {

public:
    void getNumberOfPortalBlocks()const;
//  void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const; //TODO: incomplete function definition
    bool isFilled()const;
    void getHeight()const;
    bool isValid()const;
    void evaluate(BlockPos const&, BlockSource const&);
    void createRecord()const;
    void updateNeighboringBlocks(BlockSource &, Vec3 const&)const;
    void getWidth()const;
//  PortalShape(BlockSource const&, BlockPos const&, PortalAxis); //TODO: incomplete function definition
    void createPortalBlocks(WorldChangeTransaction &)const;
    void _isEmptyBlock(Block const&)const;
    void _getIdentifierBlockPos()const;
    void _calculatePortalHeight(BlockSource const&);
//  void setAxis(PortalAxis); //TODO: incomplete function definition
};
