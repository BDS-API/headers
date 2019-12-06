#pragma once

class RepairItemRecipe : MultiRecipe {

public:
    static long RepairItemRecipe::ID;

    virtual ~RepairItemRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void RepairItemRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, mce::UUID const*);
};
