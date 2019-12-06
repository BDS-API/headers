#pragma once

class FlowerPotBlock : ActorBlock {

public:
    virtual ~FlowerPotBlock();
    virtual bool isInteractiveBlock(void)const;
    virtual bool isValidAuxValue(int)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;

    void FlowerPotBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    bool isCubeShaped(void);
    bool isSolidRender(void)const;
    void getFlowerPotEntity(BlockSource &, BlockPos const&)const;
    bool isSupportedBlock(Block const&)const;
};
