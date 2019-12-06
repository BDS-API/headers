#pragma once

class Recipe {

public:
    virtual ~Recipe();
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual bool isMultiRecipe(void)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;

    void Recipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, Util::HashString);
    void Recipe(Recipe&&);
    void getIngredients(void)const;
    bool isAnyAuxValue(ItemDescriptor const&);
    void countQuantityOfIngredient(ItemInstance const&);
    void getWidth(void)const;
    void getHeight(void)const;
    void getPriority(void)const;
    void getTag(void)const;
};
