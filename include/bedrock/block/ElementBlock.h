#pragma once

#include "unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../item/ItemInstance"
#include "../../unmapped/BaseGameVersion"
#include "../item/ItemStack"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    virtual ElementBlock::~ElementBlock()
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;

    ElementBlock(std::string const&, int, ElementType);
    void getElementCategory(ElementType);
    void getElement(BlockSource &, BlockPos const&);
    void getElement(Block const&);
    void getElement()const;
    bool isElement(BlockLegacy const&);
    bool isElement(ItemInstance const&);
    bool isElement(ItemStack const&);
    void _getElements();
    void tryGetBlockLegacyForElement(ElementType);
    void getItemForElement(ElementType, int);
    void getIngredientForElement(ElementType, int);
    void getElement(ItemInstance const&);
    void initElements();
    void shutdownElements();
    void getElementInfo(ElementType);
};
