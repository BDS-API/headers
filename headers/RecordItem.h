#pragma once

class RecordItem : Item {

public:
    virtual ~RecordItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;

    void RecordItem(std::string const&, int, LevelSoundEvent);
    void getSound(void)const;
    bool isMusicDisc(Item const&);
    void getDuration(void)const;
};
