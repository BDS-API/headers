#pragma once

class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    virtual GlowStickItem::~GlowStickItem();
    virtual bool isValidAuxValue(int)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual bool isEmissive(int)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void getIconYOffset(void)const;

    GlowStickItem(std::string const&, int);
};
