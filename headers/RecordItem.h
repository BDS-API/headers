#pragma once

class RecordItem : Item {

public:
    virtual ~RecordItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;

    void RecordItem(std::string const&, int, LevelSoundEvent);
    void getSound(void)const;
    bool isMusicDisc(Item const&);
    void getDuration(void)const;
};
