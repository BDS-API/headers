#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/BaseGameVersion.h"
#include "../item/ItemStack.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../item/ItemInstance.h"
#include "../../unmapped/Block.h"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    virtual ~ElementBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;

//  ElementBlock(std::string const&, int, ElementType); //TODO: incomplete function definition
//  void getElementCategory(ElementType); //TODO: incomplete function definition
    void getElement(BlockSource &, BlockPos const&);
//  std::string getElementName(ElementType); //TODO: incomplete function definition
    void getElement(Block const&);
    void getElement()const;
    bool isElement(BlockLegacy const&);
    bool isElement(ItemInstance const&);
    bool isElement(ItemStack const&);
    void _getElements();
//  void tryGetBlockLegacyForElement(ElementType); //TODO: incomplete function definition
//  void getItemForElement(ElementType, int); //TODO: incomplete function definition
//  void getIngredientForElement(ElementType, int); //TODO: incomplete function definition
    void getElement(ItemInstance const&);
    void initElements();
    void shutdownElements();
//  void getElementInfo(ElementType); //TODO: incomplete function definition
};
