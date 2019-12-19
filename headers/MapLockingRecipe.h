#pragma once

class MapLockingRecipe : MultiRecipe {

public:
    static long CartographyTableID;

    virtual ~MapLockingRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void MapLockingRecipe(std::string);
    void MapLockingRecipe(std::string, mce::UUID const&);
    void _setLevel(Level &)const;
};
