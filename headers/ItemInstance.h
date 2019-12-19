#pragma once

class ItemInstance : ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual ~ItemInstance();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);

    void ItemInstance(void);
    void ItemInstance(BlockLegacy const&, int);
    void ItemInstance(Block const&, int, CompoundTag const*);
    void ItemInstance(BlockLegacy const&, int, short);
    void ItemInstance(Item const&);
    void ItemInstance(Item const&, int);
    void ItemInstance(Item const&, int, int);
    void ItemInstance(Item const&, int, int, CompoundTag const*);
    void ItemInstance(ItemInstance const&);
    void ItemInstance(ItemStack const&);
    void clone(void)const;
    void fromTag(CompoundTag const&);
};
