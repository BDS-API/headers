#pragma once

class ItemDescriptor {

public:

    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor(ItemDescriptor&&);
    ItemDescriptor(void);
    ItemDescriptor(Block const&);
    ItemDescriptor(BlockLegacy const&);
    ItemDescriptor(Item const&, int);
    ItemDescriptor(int, int);
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
