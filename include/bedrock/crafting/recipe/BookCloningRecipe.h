#pragma once

#include <string>
#include "MultiRecipe.h"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    virtual void getResultItem()const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void getIngredient(int, int)const;
    virtual void size()const;
    ~BookCloningRecipe();
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getCraftingSize()const;
    BookCloningRecipe(std::string);
    BookCloningRecipe(std::string, mce::UUID const&);
};
