#pragma once

class FireworkChargeItem : Item {

public:
    static long FireworkChargeItem::TAG_EXPLOSION[abi:cxx11];
    static long FireworkChargeItem::TAG_E_TYPE[abi:cxx11];
    static long FireworkChargeItem::TAG_E_COLORS[abi:cxx11];
    static long FireworkChargeItem::TAG_E_FADECOLORS[abi:cxx11];
    static long FireworkChargeItem::TAG_E_TRAIL[abi:cxx11];
    static long FireworkChargeItem::TAG_E_FLICKER[abi:cxx11];

    virtual ~FireworkChargeItem();
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void getColor(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&, ItemDescriptor const&)const;
    virtual bool isTintable(void)const;
    virtual bool isSameItem(ItemStackBase const&, ItemStackBase const&)const;

    void FireworkChargeItem(std::string const&, int);
    void getFormattedHoverText(CompoundTag const&, std::string &, std::string const&);
    void appendColors(std::string &, std::vector<unsigned char, std::allocator<unsigned char>>);
    void setColor(ItemInstance &)const;
    void setColor(ItemStack &)const;
    void initFireworkChargeItem(ItemInstance &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool);
    void initFireworkChargeItem(ItemStack &, FireworkChargeItem::Shape, std::vector<unsigned char, std::allocator<unsigned char>>, std::vector<unsigned char, std::allocator<unsigned char>>, bool, bool);
};
