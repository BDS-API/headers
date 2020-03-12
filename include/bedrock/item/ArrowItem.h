#pragma once

#include <string>
#include "ItemInstance.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "../actor/Arrow.h"
#include "../block/unmapped/BlockSource.h"
#include "ItemStackBase.h"
#include "unmapped/ItemDescriptor.h"


class ArrowItem : Item {

public:
    virtual void setIcon(std::string const&, int);
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isValidAuxValue(int)const;
    ~ArrowItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    void applyEffect(Arrow *, ItemInstance const&)const;
    void getMobEffects(int)const;
    ArrowItem(std::string const&, int);
};
