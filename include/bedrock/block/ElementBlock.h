#pragma once

#include "../item/ItemInstance.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../item/ItemStack.h"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;
    ~ElementBlock();
    virtual std::string buildDescriptionId(Block const&)const;
//  std::string getElementName(ElementType); //TODO: incomplete function definition
    void getElement(Block const&);
//  void tryGetBlockLegacyForElement(ElementType); //TODO: incomplete function definition
//  void getItemForElement(ElementType, int); //TODO: incomplete function definition
    void getElement(ItemInstance const&);
    void shutdownElements();
    void _getElements();
    void getElement(BlockSource &, BlockPos const&);
    bool isElement(BlockLegacy const&);
//  void getElementInfo(ElementType); //TODO: incomplete function definition
//  void getIngredientForElement(ElementType, int); //TODO: incomplete function definition
//  ElementBlock(std::string const&, int, ElementType); //TODO: incomplete function definition
    void getElement()const;
    bool isElement(ItemStack const&);
//  void getElementCategory(ElementType); //TODO: incomplete function definition
    void initElements();
    bool isElement(ItemInstance const&);
};
