#pragma once

class CauldronBlock : ActorBlock {

public:
    static long CauldronBlock::BASE_WATER_PIXEL;
    static long CauldronBlock::PIXEL_PER_LEVEL;

    virtual ~CauldronBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getExtraRenderLayers(void)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void CauldronBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void updateShape(BlockSource &, BlockPos const&);
    void setLiquidLevel(BlockSource &, BlockPos const&, int, CauldronLiquidType)const;
    void _spawnCauldronEvent(BlockSource &, BlockPos const&, LevelEvent)const;
    void _useInventory(Player &, ItemStack &, ItemStack &, int)const;
    void _explodeCauldronContents(BlockSource &, BlockPos const&, unsigned short)const;
    void _sendCauldronUsedEventToClient(Player const&, short, MinecraftEventing::POIBlockInteractionType)const;
    void _decrementStack(ItemStack &)const;
    void getLiquidLevel(int)const;
    void _flushCauldronEvent(BlockSource &, BlockPos const&, int)const;
    void spawnPotionParticles(Level &, Vec3 const&, Random &, int, int);
    void spawnLavaParticles(Level &, Vec3 const&, Random &, int);
    void spawnSplashParticles(Level &, Vec3 const&, Random &, int, int);
    void spawnBubbleParticles(Level &, Vec3 const&, Random &, int, int);
};
