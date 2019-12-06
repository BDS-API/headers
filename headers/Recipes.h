#pragma once

class Recipes {

public:

    void getFurnaceRecipes(void)const;
    void clearRecipes(void);
    void init(ResourcePackManager &);
    void loadRecipes(ResourcePackManager &);
    void _addMapRecipes(void);
    void addShapelessRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapelessRecipe, std::default_delete<ShapelessRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShulkerBoxRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, ItemInstance const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>);
    void addShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void addShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<Recipes::Type, std::allocator<Recipes::Type>> const&, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void _loadIngredientFromJson(Json::Value const&)const;
    void _itemInstanceFromIngredient(RecipeIngredient const&)const;
    void loadRecipe(Json::Value const&);
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, std::vector const&<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>, std::vector const&<Recipes::Type, std::allocator<std::vector const>>, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector<ItemInstance, std::allocator<ItemInstance>> const&, std::vector const&)>);
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const;
    void addShapedRecipe(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&, std::vector const&<Recipes::Type, std::allocator<std::vector const>>, std::vector const&<Util::HashString, std::allocator<std::vector const&>>, int, std::function<std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, int, std::vector const&<RecipeIngredient, std::allocator<std::vector const>>, std::vector const&<ItemInstance, std::allocator<ItemInstance>>, std::vector const&)>);
    void Shape(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Shape(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Shape(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addSingleIngredientRecipeItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString, std::allocator<Util::HashString>> const&);
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe, std::default_delete<ShapedRecipe>>);
    void _addItemRecipe(std::unique_ptr<Recipe, std::default_delete<Recipe>>);
    void addMultiRecipe(std::unique_ptr<MultiRecipe, std::default_delete<MultiRecipe>>);
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe, std::default_delete<ShapelessRecipe>>);
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const;
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const;
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe, std::default_delete<RepairItemRecipe>>);
    void addRecipeListener(std::weak_ptr<bool>, std::function<void ()(void)>);
    void removeRecipeListener(std::weak_ptr<bool>);
    void notifyRecipeListeners(void);
    void Recipes(void);
};
