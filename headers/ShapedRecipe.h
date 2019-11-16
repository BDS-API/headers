#pragma once

class ShapedRecipe : Recipe {

    virtual void Shaped~ShapedRecipe();
    virtual void Shaped~ShapedRecipe();
    virtual void Shapedassemble(CraftingContainer &)const;
    virtual void ShapedgetCraftingSize(void)const;
    virtual void ShapedgetIngredient(int, int)const;
    virtual void ShapedgetResultItem(void)const;
    virtual void ShapedisShapeless(void)const;
    virtual void Shapedmatches(CraftingContainer &, Level &)const;
    virtual void Shapedsize(void)const;
    virtual void ShapedisExperimental(void)const;
    virtual void getId(void)const;
    virtual void getItemPack(void)const;
    virtual void isMultiRecipe(void)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&)const;
    virtual void itemsMatch(ItemDescriptor const&, ItemDescriptor const&, CompoundTag const*)const;
    virtual void itemsMatch(ItemDescriptor const&, int, int, CompoundTag const*)const;
}
