#pragma once

#include <memory>
#include <string>
#include <vector>
#include <functional>


class Recipes {

public:
    class FurnaceRecipeKey;
    class Type;

    void notifyRecipeListeners();
    void Shape(std::string const&);
    void init(ResourcePackManager &);
    void getFurnaceRecipes()const;
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void Shape(std::string const&, std::string const&);
    std::string getRecipesAllTags()const;
    void _itemInstanceFromIngredient(RecipeIngredient const&)const;
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe>);
    void addShapelessRecipe(std::string, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void removeRecipeListener(std::weak_ptr<bool>);
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe>);
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe>);
    void _addItemRecipe(std::unique_ptr<Recipe>);
    void _loadIngredientFromJson(Json::Value const&)const;
    void addShapedRecipe(std::string, std::vector<ItemInstance> const&, std::vector const&, std::allocator<std::string>);
    void _addMapRecipes();
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString> const&);
    void loadRecipe(Json::Value const&);
    ~Recipes();
    void loadRecipes(ResourcePackManager &);
    void addShulkerBoxRecipe(std::string &, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void Shape(std::string const&, std::string const&, std::string const&);
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void addRecipeListener(std::weak_ptr<bool>, std::function<void (void)>);
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const;
    void addSingleIngredientRecipeItem(std::string, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString> const&);
    void addMultiRecipe(std::unique_ptr<MultiRecipe>);
    std::string getRecipes(Util::HashString const&)const;
    void clearRecipes();
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>);
    void addShapedRecipe(std::string, ItemInstance const&, std::vector<std::string> const&, std::vector const&, std::allocator<std::vector const>);
    Recipes();
    class FurnaceRecipeKey {

    public:
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey &&);
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&);
        FurnaceRecipeKey(int, Util::HashString const&);
        void operator<(Recipes::FurnaceRecipeKey const&)const;
        ~FurnaceRecipeKey();
    };
    class Type {

    public:
        Type(char, Item *);
        Type(Recipes::Type const&);
        Type(Recipes::Type &&);
        Type(char, BlockLegacy const*);
        Type(char, Block const*);
        Type(char, RecipeIngredient const&);
        ~Type();
    };
};
