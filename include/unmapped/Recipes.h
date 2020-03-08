#pragma once

#include "../bedrock/crafting/recipe/ShapedRecipe"
#include "../bedrock/crafting/recipe/Recipe"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/crafting/recipe/MultiRecipe"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/crafting/recipe/RepairItemRecipe"
#include "../bedrock/crafting/recipe/ShapelessRecipe"


class Recipes {

public:

    void getFurnaceRecipes()const;
    void clearRecipes();
    void init(ResourcePackManager &);
    void loadRecipes(ResourcePackManager &);
    void _addMapRecipes();
    void addShapelessRecipe(std::string, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&, std::allocator<std::vector const&>);
    void addShulkerBoxRecipe(std::string &, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&, std::allocator<std::vector const&>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&, std::allocator<std::vector const&>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&, std::allocator<std::vector const&>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&, std::allocator<std::vector const&>);
    void _loadIngredientFromJson(Json::Value const&)const;
    void _itemInstanceFromIngredient(RecipeIngredient const&)const;
    void loadRecipe(Json::Value const&);
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addShapedRecipe(std::string, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, std::vector const&, std::allocator<std::string>);
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const;
    void addShapedRecipe(std::string, ItemInstance const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector const&, std::allocator<std::vector const>);
    void Shape(std::string const&);
    void Shape(std::string const&, std::string const&);
    void Shape(std::string const&, std::string const&, std::string const&);
    void addSingleIngredientRecipeItem(std::string, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>>);
    void _addItemRecipe(std::unique_ptr<Recipe, std::default_delete<Recipe>>);
    void addMultiRecipe(std::unique_ptr<MultiRecipe, std::default_delete<MultiRecipe>>);
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe, std::default_delete<ShapelessRecipe>>);
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe, std::default_delete<RepairItemRecipe>>);
    void addRecipeListener(std::weak_ptr<bool>, std::function<void ()(void)>);
    void removeRecipeListener(std::weak_ptr<bool>);
    void notifyRecipeListeners();
    Recipes(void);
};
