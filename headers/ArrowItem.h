#pragma once

class ArrowItem : Item {

public:
    virtual ~ArrowItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isValidAuxValue(int)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void ArrowItem(std::string const&, int);
    void applyEffect(Arrow *, ItemInstance const&)const;
    void getMobEffects(int)const;
};
