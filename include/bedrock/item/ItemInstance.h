#pragma once

#include "../block/BlockLegacy"
#include "../../unmapped/Block"
#include "../nbt/CompoundTag"


class ItemInstance : ItemStackBase {

public:
    static long EMPTY_ITEM;

    ItemInstance::~ItemInstance()
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);

    ItemInstance(void);
    ItemInstance(BlockLegacy const&, int);
    ItemInstance(Block const&, int, CompoundTag const*);
    ItemInstance(BlockLegacy const&, int, short);
    ItemInstance(Item const&);
    ItemInstance(Item const&, int);
    ItemInstance(Item const&, int, int);
    ItemInstance(Item const&, int, int, CompoundTag const*);
    ItemInstance(ItemInstance const&);
    ItemInstance(ItemStack const&);
    void clone()const;
    void fromTag(CompoundTag const&);
};
