#pragma once

#include <memory>


namespace PotionBrewing {

    static long mPotionMixes;
    static long mContainerMixes;
    static long mChemistryMixes;
    static long mValidIngredients;
    static long mValidContainers;

    void getPotionMixes(); // _ZN13PotionBrewing14getPotionMixesEv
    void getContainerMixes(); // _ZN13PotionBrewing17getContainerMixesEv
    void initPotionBrewing(); // _ZN13PotionBrewing17initPotionBrewingEv
    void addContainer(PotionBrewing::Ingredient const&); // _ZN13PotionBrewing12addContainerERKNS_10IngredientE
    void addChemistryMix(ItemInstance const&, PotionBrewing::Ingredient const&, ItemInstance const&); // _ZN13PotionBrewing15addChemistryMixERK12ItemInstanceRKNS_10IngredientES2_
    void shutdown(); // _ZN13PotionBrewing8shutdownEv
    bool isFuel(ItemDescriptor const&); // _ZN13PotionBrewing6isFuelERK14ItemDescriptor
    void getFuelValue(ItemDescriptor const&); // _ZN13PotionBrewing12getFuelValueERK14ItemDescriptor
    bool isIngredient(ItemDescriptor const&); // _ZN13PotionBrewing12isIngredientERK14ItemDescriptor
    bool isContainerIngredient(ItemDescriptor const&); // _ZN13PotionBrewing21isContainerIngredientERK14ItemDescriptor
    bool isPotionIngredient(ItemDescriptor const&); // _ZN13PotionBrewing18isPotionIngredientERK14ItemDescriptor
    bool hasMix(ItemInstance const&, ItemDescriptor const&); // _ZN13PotionBrewing6hasMixERK12ItemInstanceRK14ItemDescriptor
    bool hasContainerMix(ItemDescriptor const&, ItemDescriptor const&); // _ZN13PotionBrewing15hasContainerMixERK14ItemDescriptorS2_
    bool hasPotionMix(ItemInstance const&, ItemDescriptor const&); // _ZN13PotionBrewing12hasPotionMixERK12ItemInstanceRK14ItemDescriptor
    bool hasChemistryMix(ItemDescriptor const&, ItemDescriptor const&); // _ZN13PotionBrewing15hasChemistryMixERK14ItemDescriptorS2_
    bool hasPotionMix(std::shared_ptr<Potion const> const&, ItemDescriptor const&); // _ZN13PotionBrewing12hasPotionMixERKSt10shared_ptrIK6PotionERK14ItemDescriptor
    void getChemistryMix(ItemDescriptor const&, ItemDescriptor const&); // _ZN13PotionBrewing15getChemistryMixERK14ItemDescriptorS2_
    void mix(ItemDescriptor const&, ItemInstance const&); // _ZN13PotionBrewing3mixERK14ItemDescriptorRK12ItemInstance
//  void chemistryMixMatches(PotionBrewing::Mix<ItemInstance> const&, ItemDescriptor const&, ItemDescriptor const&); //TODO: incomplete function definition // _ZN13PotionBrewing19chemistryMixMatchesERKNS_3MixI12ItemInstanceEERK14ItemDescriptorS7_
    void addContainerRecipe(Item const&, PotionBrewing::Ingredient const&, Item const&); // _ZN13PotionBrewing18addContainerRecipeERK4ItemRKNS_10IngredientES2_
    void addPotionMix(std::shared_ptr<Potion const>, PotionBrewing::Ingredient const&, std::shared_ptr<Potion const> const&); // _ZN13PotionBrewing12addPotionMixESt10shared_ptrIK6PotionERKNS_10IngredientERKS3_
};
