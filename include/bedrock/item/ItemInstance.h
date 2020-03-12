#pragma once

#include "ItemStack.h"
#include "../block/BlockLegacy.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "ItemStackBase.h"
#include "Item.h"


class ItemInstance : ItemStackBase {

public:
    static long EMPTY_ITEM;

    ~ItemInstance();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
    ItemInstance(Block const&, int, CompoundTag const*);
    ItemInstance(BlockLegacy const&, int);
    void clone()const;
    ItemInstance(ItemStack const&);
    ItemInstance(Item const&);
    ItemInstance();
    ItemInstance(Item const&, int);
    ItemInstance(Item const&, int, int);
    ItemInstance(Item const&, int, int, CompoundTag const*);
    ItemInstance(ItemInstance const&);
    void fromTag(CompoundTag const&);
    ItemInstance(BlockLegacy const&, int, short);
};
