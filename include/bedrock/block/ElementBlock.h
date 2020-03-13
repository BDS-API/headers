#pragma once

#include <string>
#include "BlockLegacy.h"


class ElementBlock : BlockLegacy {

public:
    static long mElements;

    ~ElementBlock(); // _ZN12ElementBlockD2Ev
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK12ElementBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK12ElementBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK12ElementBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual void tryLegacyUpgrade(unsigned short)const; // _ZNK12ElementBlock16tryLegacyUpgradeEt
//  ElementBlock(std::string const&, int, ElementType); //TODO: incomplete function definition // _ZN12ElementBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi11ElementType
//  void getElementCategory(ElementType); //TODO: incomplete function definition // _ZN12ElementBlock18getElementCategoryE11ElementType
    void getElement(BlockSource &, BlockPos const&); // _ZN12ElementBlock10getElementER11BlockSourceRK8BlockPos
//  std::string getElementName(ElementType); //TODO: incomplete function definition // _ZN12ElementBlock14getElementNameB5cxx11E11ElementType
    void getElement(Block const&); // _ZN12ElementBlock10getElementERK5Block
    void getElement()const; // _ZNK12ElementBlock10getElementEv
    bool isElement(BlockLegacy const&); // _ZN12ElementBlock9isElementERK11BlockLegacy
    bool isElement(ItemInstance const&); // _ZN12ElementBlock9isElementERK12ItemInstance
    bool isElement(ItemStack const&); // _ZN12ElementBlock9isElementERK9ItemStack
    void _getElements(); // _ZN12ElementBlock12_getElementsEv
//  void tryGetBlockLegacyForElement(ElementType); //TODO: incomplete function definition // _ZN12ElementBlock27tryGetBlockLegacyForElementE11ElementType
//  void getItemForElement(ElementType, int); //TODO: incomplete function definition // _ZN12ElementBlock17getItemForElementE11ElementTypei
//  void getIngredientForElement(ElementType, int); //TODO: incomplete function definition // _ZN12ElementBlock23getIngredientForElementE11ElementTypei
    void getElement(ItemInstance const&); // _ZN12ElementBlock10getElementERK12ItemInstance
    void initElements(); // _ZN12ElementBlock12initElementsEv
    void shutdownElements(); // _ZN12ElementBlock16shutdownElementsEv
//  void getElementInfo(ElementType); //TODO: incomplete function definition // _ZN12ElementBlock14getElementInfoE11ElementType
};
