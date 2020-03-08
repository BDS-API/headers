#pragma once

#include "../../../unmapped/HashString"
#include "../../item/ItemInstance"
#include "../../../unmapped/ItemDescriptor"


class Recipe {

public:
    virtual Recipe::~Recipe();
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual bool isMultiRecipe(void)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    Recipe(std::string, Util::HashString);
    Recipe(Recipe&&);
    void getIngredients(void)const;
    bool isAnyAuxValue(ItemDescriptor const&);
    void countQuantityOfIngredient(ItemInstance const&);
    void getWidth(void)const;
    void getHeight(void)const;
    void getPriority(void)const;
    void getTag(void)const;
};
