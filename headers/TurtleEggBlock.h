#pragma once

class TurtleEggBlock : BlockLegacy {

public:
    virtual ~TurtleEggBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void TurtleEggBlock(std::string const&, int);
    void _destroyEgg(BlockSource &, BlockPos const&, Actor &, int, bool)const;
    void _shouldUpdateHatchLevel(BlockSource &)const;
    void _decreaseEggs(BlockSource &, BlockPos const&, unsigned int, bool)const;
};
