#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class FireworksRecipe : MultiRecipe {

public:
    static long ID;

    ~FireworksRecipe();
    virtual void getIngredient(int, int)const;
    virtual void assemble(CraftingContainer &)const;
    virtual void getResultItem()const;
    virtual void size()const;
    virtual void getCraftingSize()const;
    virtual bool isShapeless()const;
    virtual bool isExperimental()const;
    virtual void matches(CraftingContainer &, Level &)const;
    FireworksRecipe(std::string, mce::UUID const*);
};
