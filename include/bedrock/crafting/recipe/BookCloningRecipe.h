#pragma once

#include "../../../mce/UUID"
#include "../../container/CraftingContainer"
#include "../../level/Level"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    BookCloningRecipe::~BookCloningRecipe()
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize()const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual bool isExperimental()const;

    BookCloningRecipe(std::string);
    BookCloningRecipe(std::string, mce::UUID const&);
};
