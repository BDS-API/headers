#pragma once

class CompassItem : Item {

public:
    virtual ~CompassItem();
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;

    void CompassItem(std::string const&, int);
    void populateFrames(cg::ImageDescription const&);
};
