#pragma once

#include <string>
#include <memory>
#include "Item.h"


class RecordItem : Item {

public:
    ~RecordItem(); // _ZN10RecordItemD2Ev
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK10RecordItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK10RecordItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
//  RecordItem(std::string const&, int, LevelSoundEvent); //TODO: incomplete function definition // _ZN10RecordItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi15LevelSoundEvent
    void getSound()const; // _ZNK10RecordItem8getSoundEv
    bool isMusicDisc(Item const&); // _ZN10RecordItem11isMusicDiscERK4Item
    void getDuration()const; // _ZNK10RecordItem11getDurationEv
};
