#pragma once

#include "../level/Level"
#include "../container/Container"
#include "unmapped/ItemDescriptor"
#include "../util/Vec3"
#include "../block/unmapped/BlockSource"
#include "../actor/Player"
#include "../nbt/CompoundTag"


class SplashPotionItem : PotionItem {

public:
    SplashPotionItem::~SplashPotionItem()
    virtual bool isThrowable()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType()const;

    SplashPotionItem(std::string const&, int);
};
