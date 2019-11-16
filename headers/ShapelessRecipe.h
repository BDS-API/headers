#pragma once

class ShapelessRecipe : Recipe {

    virtual void Shapeless~ShapelessRecipe();
    virtual void Shapeless~ShapelessRecipe();
    virtual void Shapelessassemble(CraftingContainer &)const;
    virtual void ShapelessgetCraftingSize(void)const;
    virtual void ShapelessgetIngredient(int, int)const;
    virtual void ShapelessgetResultItem(void)const;
    virtual void ShapelessisShapeless(void)const;
    virtual void Shapelessmatches(CraftingContainer &, Level &)const;
    virtual void Shapelesssize(void)const;
    virtual void ShapelessisExperimental(void)const;
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual void isMultiRecipe(void)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
}
