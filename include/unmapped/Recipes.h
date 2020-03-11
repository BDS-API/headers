#pragma once

#include "./RecipeIngredient.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "./HashString.h"
#include "../json/Value.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/crafting/recipe/MultiRecipe.h"
#include "../bedrock/crafting/recipe/ShapedRecipe.h"
#include <memory>
#include "../bedrock/crafting/recipe/Recipe.h"
#include "../bedrock/crafting/recipe/ShapelessRecipe.h"
#include <vector>
#include "../bedrock/crafting/recipe/RepairItemRecipe.h"
#include <functional>
#include "./Type.h"
#include <string>


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
    ~Recipes();
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe, std::default_delete<RepairItemRecipe>>);
    std::string getRecipes(Util::HashString const&)const;
    std::string getRecipesAllTags()const;
//  void addRecipeListener(std::weak_ptr<bool>, std::function<void (void)>); //TODO: incomplete function definition
    void removeRecipeListener(std::weak_ptr<bool>);
    void notifyRecipeListeners();
    Recipes();
};
