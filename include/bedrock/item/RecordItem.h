#pragma once

#include "../level/Level"
#include "unmapped/ItemDescriptor"
#include "../nbt/CompoundTag"


class RecordItem : Item {

public:
    RecordItem::~RecordItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    RecordItem(std::string const&, int, LevelSoundEvent);
    void getSound()const;
    bool isMusicDisc(Item const&);
    void getDuration()const;
};
