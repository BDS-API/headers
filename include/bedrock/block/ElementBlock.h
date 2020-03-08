#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../item/ItemInstance"
#include "../item/ItemStack"
#include "../../unmapped/BaseGameVersion"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    virtual ElementBlock::~ElementBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;

    ElementBlock(std::string const&, int, ElementType);
    void getElementCategory(ElementType);
    void getElement(BlockSource &, BlockPos const&);
    void getElement(Block const&);
    void getElement(void)const;
    bool isElement(BlockLegacy const&);
    bool isElement(ItemInstance const&);
    bool isElement(ItemStack const&);
    void _getElements(void);
    void tryGetBlockLegacyForElement(ElementType);
    void getItemForElement(ElementType, int);
    void getIngredientForElement(ElementType, int);
    void getElement(ItemInstance const&);
    void initElements(void);
    void shutdownElements(void);
    void getElementInfo(ElementType);
};
