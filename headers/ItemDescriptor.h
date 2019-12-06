#pragma once

class ItemDescriptor {

public:

    void ItemDescriptor(ItemDescriptor const&);
    void ItemDescriptor(ItemDescriptor&&);
    void ItemDescriptor(void);
    void ItemDescriptor(Block const&);
    void ItemDescriptor(BlockLegacy const&);
    void ItemDescriptor(Item const&, int);
    void ItemDescriptor(int, int);
    void setAuxValue(short);
    void getItem(void)const;
    void getBlock(void)const;
    bool isValid(void)const;
    bool isNull(void)const;
    void getId(void)const;
    void getAuxValue(void)const;
    void getIdAux(void)const;
    void sameItem(ItemDescriptor const&)const;
    void sameItemAndAux(ItemDescriptor const&)const;
    void sameItemAndAux(ItemStack const&)const;
    void getLegacyBlock(void)const;
};
