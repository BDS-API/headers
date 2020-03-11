#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "./ItemInstance.h"
#include "./Item.h"
#include "../level/Level.h"
#include "../util/Vec3.h"
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include "../container/Container.h"
#include "../actor/Arrow.h"


class ArrowItem : Item {

public:
    virtual ~ArrowItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual std::string buildEffectDescriptionName(ItemStackBase const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    ArrowItem(std::string const&, int);
    void applyEffect(Arrow *, ItemInstance const&)const;
    void getMobEffects(int)const;
};
