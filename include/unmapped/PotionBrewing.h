#pragma once

#include "../bedrock/item/ItemInstance"
#include "../bedrock/item/Item"


class PotionBrewing {

public:
    static long mPotionMixes;
    static long mContainerMixes;
    static long mChemistryMixes;
    static long mValidIngredients;
    static long mValidContainers;


    void getPotionMixes(void);
    void getContainerMixes(void);
    void initPotionBrewing(void);
    void addContainer(PotionBrewing::Ingredient const&);
    void addChemistryMix(ItemInstance const&, PotionBrewing::Ingredient const&, ItemInstance const&);
    void shutdown(void);
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
    void chemistryMixMatches(PotionBrewing::Mix<ItemInstance> const&, ItemDescriptor const&, ItemDescriptor const&);
    void addContainerRecipe(Item const&, PotionBrewing::Ingredient const&, Item const&);
    void addPotionMix(std::shared_ptr<Potion const>, PotionBrewing::Ingredient const&, std::shared_ptr<Potion const> const&);
};
