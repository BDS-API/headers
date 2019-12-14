#pragma once

class ChemistryTableBlock : ActorBlock {

public:
    virtual ~ChemistryTableBlock();
    virtual bool isCraftingBlock(void)const;
    virtual bool isWaterBlocking(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    void ChemistryTableBlock(std::string const&, int);
    void getItemForType(ChemistryTableType, int);
    void _getBlockEntity(BlockSource &, BlockPos const&);
    bool isUIValidForPlayer(BlockPos const&, Player &, float, ChemistryTableType);
    void _isChemistryTable(Block const&);
};
