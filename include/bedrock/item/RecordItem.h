#pragma once

#include <memory>
#include "Item.h"
#include <string>


class RecordItem : Item {

public:
    ~RecordItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    void getDuration()const;
//  RecordItem(std::string const&, int, LevelSoundEvent); //TODO: incomplete function definition
    bool isMusicDisc(Item const&);
    void getSound()const;
};
