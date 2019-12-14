#pragma once

class MapCloningRecipe : MultiRecipe {

public:
    static long MapCloningRecipe::CraftingTableID;
    static long MapCloningRecipe::CartographyTableID;

    virtual ~MapCloningRecipe();
    virtual void assemble(CraftingContainer &)const;
    virtual void getCraftingSize(void)const;
    virtual void getIngredient(int, int)const;
    virtual void getResultItem(void)const;
    virtual void matches(CraftingContainer &, Level &)const;
    virtual void size(void)const;
    virtual bool isExperimental(void)const;

    void MapCloningRecipe(std::string, mce::UUID const&);
    void _getTagForUUID(mce::UUID const&);
};
