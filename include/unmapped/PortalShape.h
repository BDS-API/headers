#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "./WorldChangeTransaction.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"


class PortalShape {

public:

//  PortalShape(BlockSource const&, BlockPos const&, PortalAxis); //TODO: incomplete function definition
    void evaluate(BlockPos const&, BlockSource const&);
    void _isEmptyBlock(Block const&)const;
//  void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const; //TODO: incomplete function definition
    void _calculatePortalHeight(BlockSource const&);
//  void setAxis(PortalAxis); //TODO: incomplete function definition
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
