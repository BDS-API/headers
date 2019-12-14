#pragma once

class CampfireBlock : ActorBlock {

public:
    virtual ~CampfireBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLightEmission(Block const&)const;
    virtual bool hasVariableLighting(void)const;
    virtual bool isWaterBlocking(void)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void CampfireBlock(std::string const&, int);
    void tryLightFire(BlockSource &, BlockPos const&);
    void _canBeLit(BlockSource &, BlockPos const&);
    void tryDouseFire(BlockSource &, BlockPos const&, bool);
    bool isLit(Block const&);
    void _getBlockActor(BlockSource &, BlockPos const&)const;
    void _dropCookingFood(BlockSource &, BlockPos const&)const;
    void _getShape(Block const&, AABB &)const;
    void _checkAlive(BlockSource &, BlockPos const&)const;
};
