#pragma once

#include "../bedrock/crafting/recipe/RepairItemRecipe.h"
#include "HashString.h"
#include <string>
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/block/BlockLegacy.h"
#include "RecipeIngredient.h"
#include "../bedrock/item/Item.h"
#include "../bedrock/crafting/recipe/ShapelessRecipe.h"
#include "../bedrock/crafting/recipe/MultiRecipe.h"
#include "../bedrock/crafting/recipe/ShapedRecipe.h"
#include "../json/Value.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "Block.h"
#include <vector>
#include "../bedrock/crafting/recipe/Recipe.h"
#include <memory>
#include <functional>


class Recipes {

public:
    class FurnaceRecipeKey;
    class Type;

    Recipes();
    void addShulkerBoxRecipe(std::string &, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void init(ResourcePackManager &);
    void addShapedRecipe(std::string, ItemInstance const&, std::vector<std::string> const&, std::vector const&, std::allocator<std::vector const>);
    void Shape(std::string const&, std::string const&);
    void _addItemRecipe(std::unique_ptr<Recipe>);
    void addShapedRecipe(std::string, std::vector<ItemInstance> const&, std::vector const&, std::allocator<std::string>);
    std::string getRecipes(Util::HashString const&)const;
    void _addMapRecipes();
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void Shape(std::string const&);
    void addSingleIngredientRecipeItem(std::string, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString> const&);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void Shape(std::string const&, std::string const&, std::string const&);
    void loadRecipes(ResourcePackManager &);
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const;
    std::string getRecipesAllTags()const;
    void getFurnaceRecipes()const;
    void loadRecipe(Json::Value const&);
    void notifyRecipeListeners();
    void _loadIngredientFromJson(Json::Value const&)const;
    void addRecipeListener(std::weak_ptr<bool>, std::function<void (void)>);
    void addShapelessRecipe(std::string, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe>);
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    ~Recipes();
    void removeRecipeListener(std::weak_ptr<bool>);
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString> const&);
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe>);
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void clearRecipes();
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe>);
    void addMultiRecipe(std::unique_ptr<MultiRecipe>);
    void _itemInstanceFromIngredient(RecipeIngredient const&)const;
    class FurnaceRecipeKey {

    public:
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&);
        FurnaceRecipeKey(int, Util::HashString const&);
        void operator<(Recipes::FurnaceRecipeKey const&)const;
        ~FurnaceRecipeKey();
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey &&);
    };
    class Type {

    public:
        ~Type();
        Type(Recipes::Type const&);
        Type(Recipes::Type &&);
        Type(char, RecipeIngredient const&);
        Type(char, Block const*);
        Type(char, BlockLegacy const*);
        Type(char, Item *);
    };
};
