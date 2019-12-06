#pragma once

class ShulkerBoxBlockActor : ChestBlockActor {

public:
    static long ShulkerBoxBlockActor::ITEMS_SIZE;

    virtual ~ShulkerBoxBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getMaxStackSize(void)const;
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void getObstructionAABB(void)const;
    virtual void _detectEntityObstruction(BlockSource &)const;

    void ShulkerBoxBlockActor(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockActorRendererId, BlockPos const&);
    void createShulkerBoxBlockEntity(BlockPos const&);
    void getFacingDir(void);
    void setFacingDir(unsigned char);
    void _calculateBB(void);
    void _moveCollidedEntities(BlockSource &)const;
    void _calculateMovementWithCollisions(BlockSource &, Actor *)const;
    void _calculateActorMovementIntoShulker(std::vector<AABB, std::allocator<AABB>> const&, AABB const&)const;
};
