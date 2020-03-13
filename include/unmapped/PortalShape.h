#pragma once



class PortalShape {

public:
//  PortalShape(BlockSource const&, BlockPos const&, PortalAxis); //TODO: incomplete function definition // _ZN11PortalShapeC2ERK11BlockSourceRK8BlockPos10PortalAxis
    void evaluate(BlockPos const&, BlockSource const&); // _ZN11PortalShape8evaluateERK8BlockPosRK11BlockSource
    void _isEmptyBlock(Block const&)const; // _ZNK11PortalShape13_isEmptyBlockERK5Block
//  void _getDistanceUntilEdge(BlockPos const&, Facing::Name, BlockSource const&)const; //TODO: incomplete function definition // _ZNK11PortalShape21_getDistanceUntilEdgeERK8BlockPosN6Facing4NameERK11BlockSource
    void _calculatePortalHeight(BlockSource const&); // _ZN11PortalShape22_calculatePortalHeightERK11BlockSource
//  void setAxis(PortalAxis); //TODO: incomplete function definition // _ZN11PortalShape7setAxisE10PortalAxis
    void getHeight()const; // _ZNK11PortalShape9getHeightEv
    void getWidth()const; // _ZNK11PortalShape8getWidthEv
    void getNumberOfPortalBlocks()const; // _ZNK11PortalShape23getNumberOfPortalBlocksEv
    bool isValid()const; // _ZNK11PortalShape7isValidEv
    bool isFilled()const; // _ZNK11PortalShape8isFilledEv
    void createRecord()const; // _ZNK11PortalShape12createRecordEv
    void _getIdentifierBlockPos()const; // _ZNK11PortalShape22_getIdentifierBlockPosEv
    void createPortalBlocks(WorldChangeTransaction &)const; // _ZNK11PortalShape18createPortalBlocksER22WorldChangeTransaction
    void updateNeighboringBlocks(BlockSource &, Vec3 const&)const; // _ZNK11PortalShape23updateNeighboringBlocksER11BlockSourceRK4Vec3
};
