#pragma once

#include <string>
#include "../../../unmapped/HashString.h"


class Recipe {

public:
    ~Recipe(); // _ZN6RecipeD2Ev
    virtual void getId()const; // _ZNK6Recipe5getIdEv
    virtual void getItemPack()const; // _ZNK6Recipe11getItemPackEv
    virtual bool isMultiRecipe()const; // _ZNK6Recipe13isMultiRecipeEv
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const; // _ZNK6Recipe10itemsMatchERK14ItemDescriptorS2_
    virtual bool itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const; // _ZNK6Recipe10itemsMatchERK14ItemDescriptorS2_PK11CompoundTag
    virtual bool itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const; // _ZNK6Recipe10itemsMatchERK14ItemDescriptoriiPK11CompoundTag
    Recipe(std::string, Util::HashString); // _ZN6RecipeC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Util10HashStringE
    Recipe(Recipe &&); // _ZN6RecipeC2EOS_
    void getIngredients()const; // _ZNK6Recipe14getIngredientsEv
    bool isAnyAuxValue(ItemDescriptor const&); // _ZN6Recipe13isAnyAuxValueERK14ItemDescriptor
    void operator==(Recipe const&)const; // _ZNK6RecipeeqERKS_
    void countQuantityOfIngredient(ItemInstance const&); // _ZN6Recipe25countQuantityOfIngredientERK12ItemInstance
    std::string getRecipeId()const; // _ZNK6Recipe11getRecipeIdB5cxx11Ev
    void getWidth()const; // _ZNK6Recipe8getWidthEv
    void getHeight()const; // _ZNK6Recipe9getHeightEv
    void getPriority()const; // _ZNK6Recipe11getPriorityEv
    void getTag()const; // _ZNK6Recipe6getTagEv
};
