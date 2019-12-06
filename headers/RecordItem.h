#pragma once

class RecordItem : Item {

public:
    virtual ~RecordItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, bool)const;

    void RecordItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, LevelSoundEvent);
    void getSound(void)const;
    bool isMusicDisc(Item const&);
    void getDuration(void)const;
};
