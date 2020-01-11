#pragma once

class Recipe {

public:
    virtual Recipe::~Recipe();
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual bool isMultiRecipe(void)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

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