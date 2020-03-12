#pragma once

#include "MobEffectInstance.h"
#include "FilterGroup.h"
#include "../bedrock/definition/DefinitionTrigger.h"
#include "SlotDropChance.h"
#include "../bedrock/definition/ItemDefinition.h"
#include "Block.h"
#include <memory>
#include <set>
#include "../bedrock/item/unmapped/ItemDescriptor.h"
#include <string>
#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/unmapped/ActorFilterGroup.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/util/Color.h"
#include "HashString.h"
#include "../json/Value.h"
#include <vector>
#include "FloatRange.h"
#include "../bedrock/util/Vec2.h"
#include "../bedrock/item/ItemInstance.h"
#include "GameVersion.h"
#include "../bedrock/item/Item.h"
#include "IntRange.h"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier.h"


namespace Parser {

    void serialize(Util::HashString const&, Json::Value &, char const*);
    void parse(Json::Value const&, Item const*&, char const*, char const*);
    void serialize(std::vector<std::string> const&, Json::Value &, char const*);
//  void parse(Json::Value const&, ParticleType &, char const*, char const*); //TODO: incomplete function definition
//  void parse(Json::Value const&, std::vector<LevelSoundEvent> &, char const*, char const*); //TODO: incomplete function definition
//  void serialize(ActorDamageCause const&, Json::Value &, char const*); //TODO: incomplete function definition
    void serialize(DefinitionTrigger const&, Json::Value &, char const*);
//  void parse(Json::Value const&, ActorType &, char const*, char const*); //TODO: incomplete function definition
    void serialize(MobEffectInstance const&, Json::Value &, char const*);
    void serialize(ItemDefinition const&, Json::Value &, char const*);
    void serialize(Vec2 const&, Json::Value &, char const*);
//  void serialize(std::vector<LevelSoundEvent> const&, Json::Value &, char const*); //TODO: incomplete function definition
//  void parse(Json::Value &, WeightedChoices<DefinitionTrigger> &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, MobEffectInstance &, char const*);
    void parse(Json::Value const&, std::vector<Util::HashString> &, char const*);
    void parse(Json::Value const&, Util::HashString &, char const*, char const*);
    void parse(Json::Value const&, unsigned int &, char const*, unsigned int);
    void parse(Json::Value const&, std::vector<ItemDescriptor> &);
    void parse(Json::Value const&, std::vector<ItemDescriptor> &, char const*);
    void parse(Json::Value const&, Block const*&, char const*);
    void serialize(ActorDefinitionIdentifier const&, Json::Value &, char const*);
    void parse(Json::Value const&, std::vector<std::string> &, char const*);
//  void serialize(std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> const&, Json::Value &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, Vec2 &, char const*, Vec2 const&);
    void parse(Json::Value const&, std::string &, char const*, char const*);
    void parse(Json::Value const&, int &, char const*, int);
    void serialize(IntRange const&, Json::Value &, char const*);
    void serialize(std::vector<Util::HashString> const&, Json::Value &, char const*);
    void serialize(std::vector<Item const*> const&, Json::Value &, char const*);
    void parse(Json::Value const&, Color &, char const*, Color const&);
    void parse(Json::Value const&, ItemDescriptor &);
    void parse(Json::Value const&, DefinitionTrigger &, char const*);
//  void serialize(ActorType const&, Json::Value &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, Json::Value &, char const*);
//  void parse(Json::Value const&, std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, ActorDefinitionIdentifier &, char const*, char const*);
    void reportParseError(std::string const&);
    void parse(Json::Value const&, float &, char const*, float);
    void parse(Json::Value const&, FloatRange &, char const*);
//  void parse(Json::Value const&, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> &, char const*); //TODO: incomplete function definition
    void serialize(std::vector<ItemStack> const&, Json::Value &, char const*);
    void serialize(std::vector<MobEffectInstance> const&, Json::Value &, char const*);
//  void parse(Json::Value const&, std::set<std::string, std::less<std::string>, std::allocator<std::string>> &, char const*); //TODO: incomplete function definition
    void serialize(Vec3 const&, Json::Value &, char const*);
//  void serialize(Difficulty const&, Json::Value &, char const*); //TODO: incomplete function definition
//  void serialize(std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&, Json::Value &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, std::vector<DefinitionTrigger> &);
    void serialize(ActorFilterGroup const&, Json::Value &, char const*);
    void parse(Json::Value const&, ItemDefinition &, char const*, char const*);
    void serialize(std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> const&, Json::Value &, char const*);
    void parse(Json::Value const&, std::vector<SlotDropChance> &, char const*);
    void serialize(std::vector<ActorDefinitionIdentifier> const&, Json::Value &, char const*);
    void serialize(FilterGroup const&, Json::Value &, char const*);
    void serialize(std::vector<SlotDropChance> const&, Json::Value &, char const*);
//  void parse(Json::Value const&, Difficulty &, char const*, char const*); //TODO: incomplete function definition
    void serialize(std::vector<ItemInstance> const&, Json::Value &, char const*);
//  void parse(Json::Value const&, ActorDamageCause &, char const*, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, DefinitionTrigger &);
    void serialize(FloatRange const&, Json::Value &, char const*);
    void parse(Json::Value const&, FilterGroup &, char const*, char const*);
//  void serialize(std::set<std::string, std::less<std::string>, std::allocator<std::string>> const&, Json::Value &, char const*); //TODO: incomplete function definition
    void serialize(Item const*, Json::Value &, char const*);
    void serialize(std::vector<ItemDescriptor> const&, Json::Value &, char const*);
    void parse(Json::Value const&, GameVersion &, char const*, GameVersion const&);
    void serialize(GameVersion const&, Json::Value &, char const*);
    void parse(Json::Value const&, std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> &, char const*);
    void parse(Json::Value const&, std::vector<ActorDefinitionIdentifier> &, char const*, char const*);
    void parse(Json::Value const&, Vec3 &, char const*, Vec3 const&);
//  void serialize(ParticleType const&, Json::Value &, char const*); //TODO: incomplete function definition
    void parse(Json::Value const&, IntRange &, char const*, int, int);
    void parse(Json::Value const&, bool &, char const*, bool);
};
