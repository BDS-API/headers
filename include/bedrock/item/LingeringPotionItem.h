#pragma once

#include "../block/unmapped/BlockSource.h"
#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "../container/Container.h"
#include "./PotionItem.h"
#include "../level/Level.h"
#include "../util/Vec3.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


class LingeringPotionItem : PotionItem {

public:
    virtual ~LingeringPotionItem();
    virtual bool isThrowable()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType()const;

    LingeringPotionItem(std::string const&, int);
};
