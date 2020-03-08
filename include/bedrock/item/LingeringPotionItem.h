#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "../level/Level"
#include "../actor/Player"
#include "../util/Vec3"
#include "unmapped/ItemDescriptor"
#include "../container/Container"


class LingeringPotionItem : PotionItem {

public:
    virtual LingeringPotionItem::~LingeringPotionItem()
    virtual bool isThrowable()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    virtual void getPotionType()const;

    LingeringPotionItem(std::string const&, int);
};
