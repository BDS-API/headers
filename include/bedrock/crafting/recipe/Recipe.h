#pragma once

#include <string>
#include "../../../unmapped/HashString.h"


class Recipe {

public:
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void getId()const;
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
    virtual void getItemPack()const;
    ~Recipe();
    virtual bool isMultiRecipe()const;
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    std::string getRecipeId()const;
    void countQuantityOfIngredient(ItemInstance const&);
    void getIngredients()const;
    void getPriority()const;
    void operator==(Recipe const&)const;
    Recipe(std::string, Util::HashString);
    Recipe(Recipe &&);
    void getWidth()const;
    void getTag()const;
    void getHeight()const;
    bool isAnyAuxValue(ItemDescriptor const&);
};
