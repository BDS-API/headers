#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class BookCloningRecipe : MultiRecipe {

public:
    static long ID;

    virtual void assemble(CraftingContainer &)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem()const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    virtual void size()const;
    ~BookCloningRecipe();
    BookCloningRecipe(std::string, mce::UUID const&);
    BookCloningRecipe(std::string);
};
