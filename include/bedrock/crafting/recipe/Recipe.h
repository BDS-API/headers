#pragma once

#include "../../nbt/CompoundTag"
#include "../../../unmapped/HashString"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"


class Recipe {

public:
    virtual Recipe::~Recipe()
    virtual void getId()const;
    virtual void getItemPack()const;
    virtual bool isMultiRecipe()const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    Recipe(std::string, Util::HashString);
    Recipe(Recipe&&);
    void getIngredients()const;
    bool isAnyAuxValue(ItemDescriptor const&);
    void countQuantityOfIngredient(ItemInstance const&);
    void getWidth()const;
    void getHeight()const;
    void getPriority()const;
    void getTag()const;
};
