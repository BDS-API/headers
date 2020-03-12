#pragma once

#include "ItemStackBase.h"


class ItemInstance : ItemStackBase {

public:
    static long EMPTY_ITEM;

    ~ItemInstance();
    virtual void reinit(BlockLegacy const&, int);
    virtual void reinit(Item const&, int, int);
    ItemInstance(Item const&);
    void clone()const;
    ItemInstance(BlockLegacy const&, int);
    ItemInstance();
    ItemInstance(BlockLegacy const&, int, short);
    ItemInstance(Item const&, int, int);
    ItemInstance(Item const&, int, int, CompoundTag const*);
    void fromTag(CompoundTag const&);
    ItemInstance(Item const&, int);
    ItemInstance(Block const&, int, CompoundTag const*);
    ItemInstance(ItemStack const&);
    ItemInstance(ItemInstance const&);
};
