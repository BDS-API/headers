#pragma once

#include "../nbt/CompoundTag"
#include "../level/Level"
#include "unmapped/ItemDescriptor"


class RecordItem : Item {

public:
    virtual RecordItem::~RecordItem()
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    RecordItem(std::string const&, int, LevelSoundEvent);
    void getSound()const;
    bool isMusicDisc(Item const&);
    void getDuration()const;
};
