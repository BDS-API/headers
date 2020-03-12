#pragma once

#include "ItemStack.h"
#include <string>
#include "PotionItem.h"
#include "../util/Vec3.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "../container/Container.h"
#include <memory>
#include "ItemStackBase.h"
#include "../level/Level.h"
#include "../block/unmapped/BlockSource.h"
#include "unmapped/ItemDescriptor.h"


class SplashPotionItem : PotionItem {

public:
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isThrowable()const;
    virtual void getPotionType()const;
    ~SplashPotionItem();
    virtual void setIcon(std::string const&, int);
    virtual void use(ItemStack &, Player &)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    SplashPotionItem(std::string const&, int);
};
