#pragma once

#include "../../../unmapped/HashString.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../../nbt/CompoundTag.h"
#include "../../item/unmapped/ItemDescriptor.h"


class Recipe {

public:
    virtual void getId()const;
    virtual void getItemPack()const;
    virtual bool isMultiRecipe()const;
    ~Recipe();
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    void getHeight()const;
    void getTag()const;
    Recipe(std::string, Util::HashString);
    void countQuantityOfIngredient(ItemInstance const&);
    void getIngredients()const;
    void getPriority()const;
    std::string getRecipeId()const;
    void operator==(Recipe const&)const;
    void getWidth()const;
    Recipe(Recipe &&);
    bool isAnyAuxValue(ItemDescriptor const&);
};
