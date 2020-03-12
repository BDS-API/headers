#pragma once

#include <string>
#include "BlockLegacy.h"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    ~ElementBlock();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;
    void getElement(ItemInstance const&);
//  std::string getElementName(ElementType); //TODO: incomplete function definition
    bool isElement(ItemStack const&);
//  void tryGetBlockLegacyForElement(ElementType); //TODO: incomplete function definition
    void initElements();
//  ElementBlock(std::string const&, int, ElementType); //TODO: incomplete function definition
    void shutdownElements();
    bool isElement(BlockLegacy const&);
//  void getIngredientForElement(ElementType, int); //TODO: incomplete function definition
//  void getElementInfo(ElementType); //TODO: incomplete function definition
    void getElement(BlockSource &, BlockPos const&);
//  void getElementCategory(ElementType); //TODO: incomplete function definition
    void getElement(Block const&);
    void _getElements();
//  void getItemForElement(ElementType, int); //TODO: incomplete function definition
    void getElement()const;
    bool isElement(ItemInstance const&);
};
