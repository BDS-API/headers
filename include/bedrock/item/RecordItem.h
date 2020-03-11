#pragma once

#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "./Item.h"
#include "../level/Level.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ItemDescriptor.h"


class RecordItem : Item {

public:
    virtual ~RecordItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

//  RecordItem(std::string const&, int, LevelSoundEvent); //TODO: incomplete function definition
    void getSound()const;
    bool isMusicDisc(Item const&);
    void getDuration()const;
};
