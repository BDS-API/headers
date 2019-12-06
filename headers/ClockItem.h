#pragma once

class ClockItem : Item {

public:
    virtual ~ClockItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    void ClockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void populateFrames(cg::ImageDescription const&);
};
