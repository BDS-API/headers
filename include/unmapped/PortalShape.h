#pragma once

class PortalShape {

public:

    PortalShape(BlockSource const&, BlockPos const&, PortalAxis);
    void evaluate(BlockPos const&, BlockSource const&);
    void _isEmptyBlock(Block const&)const;
    void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const;
    void _calculatePortalHeight(BlockSource const&);
    void setAxis(PortalAxis);
    void getHeight(void)const;
    void getWidth(void)const;
    void getNumberOfPortalBlocks(void)const;
    bool isValid(void)const;
    bool isFilled(void)const;
    void createRecord(void)const;
    void _getIdentifierBlockPos(void)const;
    void createPortalBlocks(WorldChangeTransaction &)const;
    void updateNeighboringBlocks(BlockSource &, Vec3 const&)const;
};
