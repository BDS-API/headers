#pragma once

class ClockItem : Item {

public:
    virtual ~ClockItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    void ClockItem(std::string const&, int);
    void populateFrames(cg::ImageDescription const&);
};
