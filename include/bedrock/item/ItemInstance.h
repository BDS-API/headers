#pragma once

#include "ItemStackBase.h"


class ItemInstance : public ItemStackBase {

public:
    static long EMPTY_ITEM;

    virtual ~ItemInstance(); // _ZN12ItemInstanceD2Ev
    virtual void __fake_function0(); // fake
    virtual void reinit(Item const&, int, int); // _ZN12ItemInstance6reinitERK4Itemii
    virtual void reinit(BlockLegacy const&, int); // _ZN12ItemInstance6reinitERK11BlockLegacyi
    ItemInstance(); // _ZN12ItemInstanceC2Ev
    ItemInstance(BlockLegacy const&, int); // _ZN12ItemInstanceC2ERK11BlockLegacyi
    ItemInstance(Block const&, int, CompoundTag const*); // _ZN12ItemInstanceC2ERK5BlockiPK11CompoundTag
    ItemInstance(BlockLegacy const&, int, short); // _ZN12ItemInstanceC2ERK11BlockLegacyis
    ItemInstance(Item const&); // _ZN12ItemInstanceC2ERK4Item
    ItemInstance(Item const&, int); // _ZN12ItemInstanceC2ERK4Itemi
    ItemInstance(Item const&, int, int); // _ZN12ItemInstanceC2ERK4Itemii
    ItemInstance(Item const&, int, int, CompoundTag const*); // _ZN12ItemInstanceC2ERK4ItemiiPK11CompoundTag
    ItemInstance(ItemInstance const&); // _ZN12ItemInstanceC2ERKS_
    ItemInstance(ItemStack const&); // _ZN12ItemInstanceC2ERK9ItemStack
    void clone()const; // _ZNK12ItemInstance5cloneEv
    void fromTag(CompoundTag const&); // _ZN12ItemInstance7fromTagERK11CompoundTag
};
