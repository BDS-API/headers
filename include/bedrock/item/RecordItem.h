#pragma once

#include <string>
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "Item.h"
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class RecordItem : Item {

public:
    ~RecordItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    bool isMusicDisc(Item const&);
    void getDuration()const;
    void getSound()const;
//  RecordItem(std::string const&, int, LevelSoundEvent); //TODO: incomplete function definition
};
