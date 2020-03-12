#pragma once

#include <string>
#include "MultiRecipe.h"
#include "../../../mce/UUID.h"
#include "../../level/Level.h"
#include "../../container/CraftingContainer.h"


class RepairItemRecipe : MultiRecipe {

public:
    static long ID;

    virtual void getIngredient(int, int)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size()const;
    virtual void assemble(CraftingContainer &)const;
    virtual bool isExperimental()const;
    virtual void getCraftingSize()const;
    ~RepairItemRecipe();
    virtual void getResultItem()const;
    RepairItemRecipe(std::string, mce::UUID const*);
};
