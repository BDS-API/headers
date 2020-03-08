#pragma once

#include "../../container/CraftingContainer"
#include "../../../mce/UUID"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    virtual BookCloningRecipe::~BookCloningRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    BookCloningRecipe(std::string);
    BookCloningRecipe(std::string, mce::UUID const&);
};
