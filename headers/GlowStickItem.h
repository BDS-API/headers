#pragma once

class GlowStickItem : ChemistryStickItem {

public:
    static long GlowStickItem::MAX_ACTIVE_TICKS;
    static long GlowStickItem::COLORS;

    virtual ~GlowStickItem();
    virtual bool isValidAuxValue(int)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset(void)const;

    void GlowStickItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
