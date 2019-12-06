#pragma once

class CompassItem : Item {

public:
    virtual ~CompassItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    void CompassItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void populateFrames(cg::ImageDescription const&);
};
