#pragma once



class PortalShape {

public:
    void getWidth()const;
    bool isFilled()const;
//  void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const; //TODO: incomplete function definition
//  void setAxis(PortalAxis); //TODO: incomplete function definition
    void getNumberOfPortalBlocks()const;
    void _calculatePortalHeight(BlockSource const&);
    void createRecord()const;
    void createPortalBlocks(WorldChangeTransaction &)const;
    void _getIdentifierBlockPos()const;
    void evaluate(BlockPos const&, BlockSource const&);
//  PortalShape(BlockSource const&, BlockPos const&, PortalAxis); //TODO: incomplete function definition
    void updateNeighboringBlocks(BlockSource &, Vec3 const&)const;
    void getHeight()const;
    void _isEmptyBlock(Block const&)const;
    bool isValid()const;
};
