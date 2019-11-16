#pragma once

class MultiRecipe : Recipe {

    virtual void Multi~MultiRecipe();
    virtual void Multi~MultiRecipe();
    virtual void Multiassemble(CraftingContainer &)const;
    virtual void MultigetCraftingSize(void)const;
    virtual void MultigetIngredient(int, int)const;
    virtual void MultigetResultItem(void)const;
    virtual void MultiisShapeless(void)const;
    virtual void Multimatches(CraftingContainer &, Level &)const;
    virtual void Multisize(void)const;
    virtual void MultiisExperimental(void)const;
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual void MultiisMultiRecipe(void)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
}
