#pragma once

#include "./Potion.h"
#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include <memory>
#include "./Ingredient.h"
#include "../bedrock/item/Item.h"


class PotionBrewing {

public:
    static long mPotionMixes;
    static long mContainerMixes;
    static long mChemistryMixes;
    static long mValidIngredients;
    static long mValidContainers;


    void getPotionMixes();
    void getContainerMixes();
    void initPotionBrewing();
    void addContainer(PotionBrewing::Ingredient const&);
    void addChemistryMix(ItemInstance const&, PotionBrewing::Ingredient const&, ItemInstance const&);
    void shutdown();
    bool isFuel(ItemDescriptor const&);
    void getFuelValue(ItemDescriptor const&);
    bool isIngredient(ItemDescriptor const&);
    bool isContainerIngredient(ItemDescriptor const&);
    bool isPotionIngredient(ItemDescriptor const&);
    bool hasMix(ItemInstance const&, ItemDescriptor const&);
    bool hasContainerMix(ItemDescriptor const&, ItemDescriptor const&);
    bool hasPotionMix(ItemInstance const&, ItemDescriptor const&);
    bool hasChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
    bool hasPotionMix(std::shared_ptr<Potion const> const&, ItemDescriptor const&);
    void getChemistryMix(ItemDescriptor const&, ItemDescriptor const&);
    void mix(ItemDescriptor const&, ItemInstance const&);
//  void chemistryMixMatches(PotionBrewing::Mix<ItemInstance> const&, ItemDescriptor const&, ItemDescriptor const&); //TODO: incomplete function definition
    void addContainerRecipe(Item const&, PotionBrewing::Ingredient const&, Item const&);
    void addPotionMix(std::shared_ptr<Potion const>, PotionBrewing::Ingredient const&, std::shared_ptr<Potion const> const&);
};
