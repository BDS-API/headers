#pragma once

#include <string>
#include <set>
#include <vector>


namespace Parser {

    void reportParseError(std::string const&); // _ZN6Parser16reportParseErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void parse(Json::Value const&, MobEffectInstance &, char const*); // _ZN6Parser5parseERKN4Json5ValueER17MobEffectInstancePKc
    void parse(Json::Value const&, int &, char const*, int); // _ZN6Parser5parseERKN4Json5ValueERiPKci
    void parse(Json::Value const&, unsigned int &, char const*, unsigned int); // _ZN6Parser5parseERKN4Json5ValueERjPKcj
    void parse(Json::Value const&, float &, char const*, float); // _ZN6Parser5parseERKN4Json5ValueERfPKcf
    void parse(Json::Value const&, FloatRange &, char const*); // _ZN6Parser5parseERKN4Json5ValueER10FloatRangePKc
    void parse(Json::Value const&, IntRange &, char const*, int, int); // _ZN6Parser5parseERKN4Json5ValueER8IntRangePKcii
    void parse(Json::Value const&, Vec2 &, char const*, Vec2 const&); // _ZN6Parser5parseERKN4Json5ValueER4Vec2PKcRKS4_
    void parse(Json::Value const&, Vec3 &, char const*, Vec3 const&); // _ZN6Parser5parseERKN4Json5ValueER4Vec3PKcRKS4_
    void parse(Json::Value const&, bool &, char const*, bool); // _ZN6Parser5parseERKN4Json5ValueERbPKcb
    void parse(Json::Value const&, Color &, char const*, Color const&); // _ZN6Parser5parseERKN4Json5ValueER5ColorPKcRKS4_
//  void parse(Json::Value const&, ParticleType &, char const*, char const*); //TODO: incomplete function definition // _ZN6Parser5parseERKN4Json5ValueER12ParticleTypePKcS7_
//  void parse(Json::Value const&, Difficulty &, char const*, char const*); //TODO: incomplete function definition // _ZN6Parser5parseERKN4Json5ValueER10DifficultyPKcS7_
    void parse(Json::Value const&, std::string &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPKcSC_
    void parse(Json::Value const&, Util::HashString &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueERN4Util10HashStringEPKcS8_
//  void parse(Json::Value const&, ActorDamageCause &, char const*, char const*); //TODO: incomplete function definition // _ZN6Parser5parseERKN4Json5ValueER16ActorDamageCausePKcS7_
    void parse(Json::Value const&, ActorDefinitionIdentifier &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueER25ActorDefinitionIdentifierPKcS7_
//  void parse(Json::Value const&, ActorType &, char const*, char const*); //TODO: incomplete function definition // _ZN6Parser5parseERKN4Json5ValueER9ActorTypePKcS7_
    void parse(Json::Value const&, Json::Value &, char const*); // _ZN6Parser5parseERKN4Json5ValueERS1_PKc
    void parse(Json::Value const&, std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt3setIPK4ItemSt4lessIS7_ESaIS7_EEPKc
    void parse(Json::Value const&, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt3setIPK5BlockSt4lessIS7_ESaIS7_EEPKc
    void parse(Json::Value const&, std::set<std::string, std::less<std::string>, std::allocator<std::string>> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessISA_ESaISA_EEPKc
    void parse(Json::Value const&, std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt3setIN4Util10HashStringENS6_8HashFuncESaIS6_EEPKc
    void parse(Json::Value const&, std::vector<std::string> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISA_EEPKc
    void parse(Json::Value const&, std::vector<Util::HashString> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorIN4Util10HashStringESaIS6_EEPKc
    void parse(Json::Value const&, std::vector<ActorDefinitionIdentifier> &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI25ActorDefinitionIdentifierSaIS5_EEPKcSA_
    void parse(Json::Value const&, std::vector<LevelSoundEvent> &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI15LevelSoundEventSaIS5_EEPKcSA_
    void parse(Json::Value const&, Item const*&, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueERPK4ItemPKcS9_
    void parse(Json::Value const&, ItemDefinition &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueER14ItemDefinitionPKcS7_
    void parse(Json::Value const&, ItemDescriptor &); // _ZN6Parser5parseERKN4Json5ValueER14ItemDescriptor
    void parse(Json::Value const&, std::vector<ItemDescriptor> &); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI14ItemDescriptorSaIS5_EE
    void parse(Json::Value const&, DefinitionTrigger &, char const*); // _ZN6Parser5parseERKN4Json5ValueER17DefinitionTriggerPKc
    void parse(Json::Value const&, DefinitionTrigger &); // _ZN6Parser5parseERKN4Json5ValueER17DefinitionTrigger
    void parse(Json::Value const&, FilterGroup &, char const*, char const*); // _ZN6Parser5parseERKN4Json5ValueER11FilterGroupPKcS7_
    void parse(Json::Value const&, GameVersion &, char const*, GameVersion const&); // _ZN6Parser5parseERKN4Json5ValueER11GameVersionPKcRKS4_
    void parse(Json::Value const&, std::vector<SlotDropChance> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI14SlotDropChanceSaIS5_EEPKc
    void parse(Json::Value const&, std::vector<ItemDescriptor> &, char const*); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI14ItemDescriptorSaIS5_EEPKc
    void parse(Json::Value const&, Block const*&, char const*); // _ZN6Parser5parseERKN4Json5ValueERPK5BlockPKc
//  void parse(Json::Value &, WeightedChoices<DefinitionTrigger> &, char const*); //TODO: incomplete function definition // _ZN6Parser5parseERN4Json5ValueER15WeightedChoicesI17DefinitionTriggerEPKc
    void parse(Json::Value const&, std::vector<DefinitionTrigger> &); // _ZN6Parser5parseERKN4Json5ValueERSt6vectorI17DefinitionTriggerSaIS5_EE
    void serialize(Item const*, Json::Value &, char const*); // _ZN6Parser9serializeEPK4ItemRN4Json5ValueEPKc
    void serialize(ItemDefinition const&, Json::Value &, char const*); // _ZN6Parser9serializeERK14ItemDefinitionRN4Json5ValueEPKc
    void serialize(DefinitionTrigger const&, Json::Value &, char const*); // _ZN6Parser9serializeERK17DefinitionTriggerRN4Json5ValueEPKc
    void serialize(MobEffectInstance const&, Json::Value &, char const*); // _ZN6Parser9serializeERK17MobEffectInstanceRN4Json5ValueEPKc
    void serialize(FloatRange const&, Json::Value &, char const*); // _ZN6Parser9serializeERK10FloatRangeRN4Json5ValueEPKc
    void serialize(IntRange const&, Json::Value &, char const*); // _ZN6Parser9serializeERK8IntRangeRN4Json5ValueEPKc
    void serialize(Vec2 const&, Json::Value &, char const*); // _ZN6Parser9serializeERK4Vec2RN4Json5ValueEPKc
    void serialize(Vec3 const&, Json::Value &, char const*); // _ZN6Parser9serializeERK4Vec3RN4Json5ValueEPKc
//  void serialize(ParticleType const&, Json::Value &, char const*); //TODO: incomplete function definition // _ZN6Parser9serializeERK12ParticleTypeRN4Json5ValueEPKc
//  void serialize(Difficulty const&, Json::Value &, char const*); //TODO: incomplete function definition // _ZN6Parser9serializeERK10DifficultyRN4Json5ValueEPKc
    void serialize(Util::HashString const&, Json::Value &, char const*); // _ZN6Parser9serializeERKN4Util10HashStringERN4Json5ValueEPKc
//  void serialize(ActorDamageCause const&, Json::Value &, char const*); //TODO: incomplete function definition // _ZN6Parser9serializeERK16ActorDamageCauseRN4Json5ValueEPKc
    void serialize(ActorDefinitionIdentifier const&, Json::Value &, char const*); // _ZN6Parser9serializeERK25ActorDefinitionIdentifierRN4Json5ValueEPKc
    void serialize(ActorFilterGroup const&, Json::Value &, char const*); // _ZN6Parser9serializeERK16ActorFilterGroupRN4Json5ValueEPKc
//  void serialize(ActorType const&, Json::Value &, char const*); //TODO: incomplete function definition // _ZN6Parser9serializeERK9ActorTypeRN4Json5ValueEPKc
    void serialize(std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt3setIPK4ItemSt4lessIS3_ESaIS3_EERN4Json5ValueEPKc
    void serialize(std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt3setIPK5BlockSt4lessIS3_ESaIS3_EERN4Json5ValueEPKc
    void serialize(std::set<std::string, std::less<std::string>, std::allocator<std::string>> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessIS6_ESaIS6_EERN4Json5ValueEPKc
    void serialize(std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt3setIN4Util10HashStringENS2_8HashFuncESaIS2_EERN4Json5ValueEPKc
    void serialize(std::vector<std::string> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERN4Json5ValueEPKc
    void serialize(std::vector<Util::HashString> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorIN4Util10HashStringESaIS2_EERN4Json5ValueEPKc
    void serialize(std::vector<ActorDefinitionIdentifier> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI25ActorDefinitionIdentifierSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<LevelSoundEvent> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI15LevelSoundEventSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<SlotDropChance> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI14SlotDropChanceSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<ItemInstance> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI12ItemInstanceSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<ItemStack> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI9ItemStackSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<Item const*> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorIPK4ItemSaIS3_EERN4Json5ValueEPKc
    void serialize(std::vector<ItemDescriptor> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI14ItemDescriptorSaIS1_EERN4Json5ValueEPKc
    void serialize(std::vector<MobEffectInstance> const&, Json::Value &, char const*); // _ZN6Parser9serializeERKSt6vectorI17MobEffectInstanceSaIS1_EERN4Json5ValueEPKc
    void serialize(FilterGroup const&, Json::Value &, char const*); // _ZN6Parser9serializeERK11FilterGroupRN4Json5ValueEPKc
    void serialize(GameVersion const&, Json::Value &, char const*); // _ZN6Parser9serializeERK11GameVersionRN4Json5ValueEPKc
};
