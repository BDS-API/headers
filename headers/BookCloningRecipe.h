#pragma once

class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    virtual ~BookCloningRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void BookCloningRecipe(std::string);
    void BookCloningRecipe(std::string, mce::UUID const&);
};
