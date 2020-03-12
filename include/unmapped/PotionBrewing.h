#pragma once

#include <memory>


namespace PotionBrewing {

    static long mPotionMixes;
    static long mContainerMixes;
    static long mChemistryMixes;
    static long mValidIngredients;
    static long mValidContainers;

    void shutdown();
    void getChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
//  void chemistryMixMatches(PotionBrewing::Mix<ItemInstance> const&, ItemDescriptor const&, ItemDescriptor const&); //TODO: incomplete function definition
    void mix(ItemDescriptor const&, ItemInstance const&);
    void addContainerRecipe(Item const&, PotionBrewing::Ingredient const&, Item const&);
    bool isFuel(ItemDescriptor const&);
    bool isPotionIngredient(ItemDescriptor const&);
    bool hasMix(ItemInstance const&, ItemDescriptor const&);
    bool hasPotionMix(std::shared_ptr<Potion const> const&, ItemDescriptor const&);
    void addChemistryMix(ItemInstance const&, PotionBrewing::Ingredient const&, ItemInstance const&);
    bool isIngredient(ItemDescriptor const&);
    void getFuelValue(ItemDescriptor const&);
    bool hasContainerMix(ItemDescriptor const&, ItemDescriptor const&);
    bool hasChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
    void getPotionMixes();
    void addContainer(PotionBrewing::Ingredient const&);
    void initPotionBrewing();
    bool isContainerIngredient(ItemDescriptor const&);
    void addPotionMix(std::shared_ptr<Potion const>, PotionBrewing::Ingredient const&, std::shared_ptr<Potion const> const&);
    void getContainerMixes();
    bool hasPotionMix(ItemInstance const&, ItemDescriptor const&);
};
