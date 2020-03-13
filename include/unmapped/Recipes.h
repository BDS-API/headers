#pragma once

#include <string>
#include <memory>
#include <functional>
#include <vector>


class Recipes {

public:
    class FurnaceRecipeKey;
    class Type;

    void getFurnaceRecipes()const; // _ZNK7Recipes17getFurnaceRecipesEv
    void clearRecipes(); // _ZN7Recipes12clearRecipesEv
    void init(ResourcePackManager &); // _ZN7Recipes4initER19ResourcePackManager
    void loadRecipes(ResourcePackManager &); // _ZN7Recipes11loadRecipesER19ResourcePackManager
    void _addMapRecipes(); // _ZN7Recipes14_addMapRecipesEv
    void addShapelessRecipe(std::string, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>); // _ZN7Recipes18addShapelessRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKSt6vectorINS_4TypeESaISA_EERKS9_IN4Util10HashStringESaISG_EEiSt8functionIFSt10unique_ptrI15ShapelessRecipeSt14default_deleteISN_EES5_RKS9_I16RecipeIngredientSaISR_EERKS9_IS6_SaIS6_EESG_EE
    void addShulkerBoxRecipe(std::string &, ItemInstance const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>); // _ZN7Recipes19addShulkerBoxRecipeERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKSt6vectorINS_4TypeESaISB_EERKSA_IN4Util10HashStringESaISH_EE
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>); // _ZN7Recipes15addShapedRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKS5_SA_RKSt6vectorINS_4TypeESaISC_EERKSB_IN4Util10HashStringESaISI_EEiSt8functionIFSt10unique_ptrI12ShapedRecipeSt14default_deleteISP_EES5_iiRKSB_I16RecipeIngredientSaIST_EERKSB_IS6_SaIS6_EESI_EE
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::string const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>); // _ZN7Recipes15addShapedRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKS5_SA_SA_RKSt6vectorINS_4TypeESaISC_EERKSB_IN4Util10HashStringESaISI_EEiSt8functionIFSt10unique_ptrI12ShapedRecipeSt14default_deleteISP_EES5_iiRKSB_I16RecipeIngredientSaIST_EERKSB_IS6_SaIS6_EESI_EE
    void addShapedRecipe(std::string, ItemInstance const&, std::string const&, std::vector<Recipes::Type> const&, std::vector const&, std::allocator<std::vector const&>); // _ZN7Recipes15addShapedRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKS5_RKSt6vectorINS_4TypeESaISC_EERKSB_IN4Util10HashStringESaISI_EEiSt8functionIFSt10unique_ptrI12ShapedRecipeSt14default_deleteISP_EES5_iiRKSB_I16RecipeIngredientSaIST_EERKSB_IS6_SaIS6_EESI_EE
    void _loadIngredientFromJson(Json::Value const&)const; // _ZNK7Recipes23_loadIngredientFromJsonERKN4Json5ValueE
    void _itemInstanceFromIngredient(RecipeIngredient const&)const; // _ZNK7Recipes27_itemInstanceFromIngredientERK16RecipeIngredient
    void loadRecipe(Json::Value const&); // _ZN7Recipes10loadRecipeERKN4Json5ValueE
    void addFurnaceRecipeAuxData(ItemInstance const&, ItemInstance const&, std::vector<Util::HashString> const&); // _ZN7Recipes23addFurnaceRecipeAuxDataERK12ItemInstanceS2_RKSt6vectorIN4Util10HashStringESaIS5_EE
    void addShapedRecipe(std::string, std::vector<ItemInstance> const&, std::vector const&, std::allocator<std::string>); // _ZN7Recipes15addShapedRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorI12ItemInstanceSaIS7_EERKS6_IS5_SaIS5_EERKS6_INS_4TypeESaISG_EERKS6_IN4Util10HashStringESaISM_EEiSt8functionIFSt10unique_ptrI12ShapedRecipeSt14default_deleteIST_EES5_iiRKS6_I16RecipeIngredientSaISX_EESB_SM_EE
    void getFurnaceRecipeResult(ItemInstance const&, Util::HashString const&)const; // _ZNK7Recipes22getFurnaceRecipeResultERK12ItemInstanceRKN4Util10HashStringE
    void addShapedRecipe(std::string, ItemInstance const&, std::vector<std::string> const&, std::vector const&, std::allocator<std::vector const>); // _ZN7Recipes15addShapedRecipeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRKSt6vectorIS5_SaIS5_EERKS9_INS_4TypeESaISE_EERKS9_IN4Util10HashStringESaISK_EEiSt8functionIFSt10unique_ptrI12ShapedRecipeSt14default_deleteISR_EES5_iiRKS9_I16RecipeIngredientSaISV_EERKS9_IS6_SaIS6_EESK_EE
    void Shape(std::string const&); // _ZN7Recipes5ShapeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void Shape(std::string const&, std::string const&); // _ZN7Recipes5ShapeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void Shape(std::string const&, std::string const&, std::string const&); // _ZN7Recipes5ShapeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_
    void addSingleIngredientRecipeItem(std::string, ItemInstance const&, RecipeIngredient const&, std::vector<Util::HashString> const&); // _ZN7Recipes29addSingleIngredientRecipeItemENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK12ItemInstanceRK16RecipeIngredientRKSt6vectorIN4Util10HashStringESaISE_EE
    void addDirectShapedRecipe(std::unique_ptr<ShapedRecipe>); // _ZN7Recipes21addDirectShapedRecipeESt10unique_ptrI12ShapedRecipeSt14default_deleteIS1_EE
    void _addItemRecipe(std::unique_ptr<Recipe>); // _ZN7Recipes14_addItemRecipeESt10unique_ptrI6RecipeSt14default_deleteIS1_EE
    void addMultiRecipe(std::unique_ptr<MultiRecipe>); // _ZN7Recipes14addMultiRecipeESt10unique_ptrI11MultiRecipeSt14default_deleteIS1_EE
    void addDirectShapelessRecipe(std::unique_ptr<ShapelessRecipe>); // _ZN7Recipes24addDirectShapelessRecipeESt10unique_ptrI15ShapelessRecipeSt14default_deleteIS1_EE
    ~Recipes(); // _ZN7RecipesD2Ev
    void getRecipeFor(ItemInstance const&, Util::HashString const&)const; // _ZNK7Recipes12getRecipeForERK12ItemInstanceRKN4Util10HashStringE
    void getAllRecipesFor(ItemInstance const&, Util::HashString const&)const; // _ZNK7Recipes16getAllRecipesForERK12ItemInstanceRKN4Util10HashStringE
    void addRepairItemRecipe(std::unique_ptr<RepairItemRecipe>); // _ZN7Recipes19addRepairItemRecipeESt10unique_ptrI16RepairItemRecipeSt14default_deleteIS1_EE
    std::string getRecipes(Util::HashString const&)const; // _ZNK7Recipes10getRecipesB5cxx11ERKN4Util10HashStringE
    std::string getRecipesAllTags()const; // _ZNK7Recipes17getRecipesAllTagsB5cxx11Ev
    void addRecipeListener(std::weak_ptr<bool>, std::function<void (void)>); // _ZN7Recipes17addRecipeListenerESt8weak_ptrIbESt8functionIFvvEE
    void removeRecipeListener(std::weak_ptr<bool>); // _ZN7Recipes20removeRecipeListenerESt8weak_ptrIbE
    void notifyRecipeListeners(); // _ZN7Recipes21notifyRecipeListenersEv
    Recipes(); // _ZN7RecipesC2Ev
    class FurnaceRecipeKey {

    public:
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey const&); // _ZN7Recipes16FurnaceRecipeKeyC2ERKS0_
        ~FurnaceRecipeKey(); // _ZN7Recipes16FurnaceRecipeKeyD2Ev
        FurnaceRecipeKey(int, Util::HashString const&); // _ZN7Recipes16FurnaceRecipeKeyC2EiRKN4Util10HashStringE
        FurnaceRecipeKey(Recipes::FurnaceRecipeKey &&); // _ZN7Recipes16FurnaceRecipeKeyC2EOS0_
        void operator<(Recipes::FurnaceRecipeKey const&)const; // _ZNK7Recipes16FurnaceRecipeKeyltERKS0_
    };
    class Type {

    public:
        Type(char, RecipeIngredient const&); // _ZN7Recipes4TypeC2EcRK16RecipeIngredient
        ~Type(); // _ZN7Recipes4TypeD2Ev
        Type(char, Block const*); // _ZN7Recipes4TypeC2EcPK5Block
        Type(char, BlockLegacy const*); // _ZN7Recipes4TypeC2EcPK11BlockLegacy
        Type(char, Item *); // _ZN7Recipes4TypeC2EcP4Item
        Type(Recipes::Type &&); // _ZN7Recipes4TypeC2EOS0_
        Type(Recipes::Type const&); // _ZN7Recipes4TypeC2ERKS0_
    };
};
