#pragma once

class SparklerItem : ChemistryStickItem {

public:
    static long SparklerItem::MAX_ACTIVE_TICKS;
    static long SparklerItem::COLORS;

    virtual ~SparklerItem();
    virtual bool isHandEquipped(void)const;
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void SparklerItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void _getColorFromData(int);
    void getColor(int);
};
