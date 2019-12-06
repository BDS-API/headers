#pragma once

class BucketItem : Item {

public:
    static long BucketItem::DRINK_DURATION;
    static long BucketItem::mFillTypeToEntityType;

    virtual ~BucketItem();
    virtual bool isDestructive(int)const;
    virtual bool isLiquidClipItem(int)const;
    virtual bool isValidAuxValue(int)const;
    virtual void uniqueAuxValues(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void releaseUsing(ItemStack &, Player *, int)const;
    virtual void getMaxStackSize(ItemDescriptor const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void BucketItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void addBucketEntitySaveData(Actor &, ItemStack &)const;
    void getFishData(Actor const&);
    void getEntityIdFromBucket(ItemInstance const&)const;
    bool isBlockFillType(BucketFillType)const;
    bool isFishFillType(BucketFillType)const;
    void readBucketEntitySaveData(BlockSource &, Actor *, unsigned char, BlockPos, ItemInstance const&)const;
    void _supportsEntityType(ActorType const&, int &)const;
    void _takeLiquid(ItemStack &, Actor &, BlockPos const&)const;
    void _tryGetBlock(BucketFillType)const;
    void _emptyBucket(BlockSource &, Block const&, BlockPos const&, Actor *, ItemStack const&, unsigned char)const;
    void _getBucketFillType(Block const&)const;
    void _canEmptyBucketIntoBlock(Block const&, Block const&)const;
    void validFishInteraction(int)const;
};
