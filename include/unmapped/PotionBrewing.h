#pragma once

#include "../bedrock/item/ItemInstance.h"
#include "Potion.h"
#include "../bedrock/item/Item.h"
#include "Ingredient.h"
#include <memory>
#include "../bedrock/item/unmapped/ItemDescriptor.h"


namespace PotionBrewing {

    static long mPotionMixes;
    static long mContainerMixes;
    static long mChemistryMixes;
    static long mValidIngredients;
    static long mValidContainers;

    bool isPotionIngredient(ItemDescriptor const&);
    void addContainer(PotionBrewing::Ingredient const&);
    bool hasPotionMix(ItemInstance const&, ItemDescriptor const&);
    bool hasMix(ItemInstance const&, ItemDescriptor const&);
    bool isIngredient(ItemDescriptor const&);
    bool hasPotionMix(std::shared_ptr<Potion const> const&, ItemDescriptor const&);
    bool isFuel(ItemDescriptor const&);
    void initPotionBrewing();
    void shutdown();
    bool isContainerIngredient(ItemDescriptor const&);
    bool hasContainerMix(ItemDescriptor const&, ItemDescriptor const&);
//  void chemistryMixMatches(PotionBrewing::Mix<ItemInstance> const&, ItemDescriptor const&, ItemDescriptor const&); //TODO: incomplete function definition
    void mix(ItemDescriptor const&, ItemInstance const&);
    void getContainerMixes();
    void addPotionMix(std::shared_ptr<Potion const>, PotionBrewing::Ingredient const&, std::shared_ptr<Potion const> const&);
    void addChemistryMix(ItemInstance const&, PotionBrewing::Ingredient const&, ItemInstance const&);
    void getPotionMixes();
    void addContainerRecipe(Item const&, PotionBrewing::Ingredient const&, Item const&);
    bool hasChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
    void getChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
    void getFuelValue(ItemDescriptor const&);
};
