#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "../../nbt/CompoundTag.h"
#include "./Recipe.h"
#include "../../../unmapped/HashString.h"
#include "../../item/ItemInstance.h"
#include <string>


class Recipe {

public:
    virtual ~Recipe();
    virtual void getId()const;
    virtual void getItemPack()const;
    virtual bool isMultiRecipe()const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    Recipe(std::string, Util::HashString);
    Recipe(Recipe &&);
    void getIngredients()const;
    bool isAnyAuxValue(ItemDescriptor const&);
    void operator==(Recipe const&)const;
    void countQuantityOfIngredient(ItemInstance const&);
    std::string getRecipeId()const;
    void getWidth()const;
    void getHeight()const;
    void getPriority()const;
    void getTag()const;
};
