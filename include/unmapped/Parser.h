#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/unmapped/ActorDefinitionIdentifier"
#include "../bedrock/item/ItemStack"
#include "../bedrock/definition/DefinitionTrigger"
#include "../bedrock/util/Vec2"
#include "../bedrock/item/Item"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/definition/ItemDefinition"
#include "../json/Value"
#include "../bedrock/util/Color"
#include "../bedrock/item/unmapped/ItemDescriptor"
#include "../bedrock/actor/unmapped/ActorFilterGroup"


class Parser {

public:

    void reportParseError(std::string const&);
    void parse(Json::Value const&, MobEffectInstance &, char const*);
    void parse(Json::Value const&, int &, char const*, int);
    void parse(Json::Value const&, unsigned int &, char const*, unsigned int);
    void parse(Json::Value const&, float &, char const*, float);
    void parse(Json::Value const&, FloatRange &, char const*);
    void parse(Json::Value const&, IntRange &, char const*, int, int);
    void parse(Json::Value const&, Vec2 &, char const*, Vec2 const&);
    void parse(Json::Value const&, Vec3 &, char const*, Vec3 const&);
    void parse(Json::Value const&, bool &, char const*, bool);
    void parse(Json::Value const&, Color &, char const*, Color const&);
    void parse(Json::Value const&, ParticleType &, char const*, char const*);
    void parse(Json::Value const&, Difficulty &, char const*, char const*);
    void parse(Json::Value const&, std::string &, char const*, char const*);
    void parse(Json::Value const&, Util::HashString &, char const*, char const*);
    void parse(Json::Value const&, ActorDamageCause &, char const*, char const*);
    void parse(Json::Value const&, ActorDefinitionIdentifier &, char const*, char const*);
    void parse(Json::Value const&, ActorType &, char const*, char const*);
    void parse(Json::Value const&, Json::Value&, char const*);
    void parse(Json::Value const&, std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> &, char const*);
    void parse(Json::Value const&, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> &, char const*);
    void parse(Json::Value const&, std::set<std::string, std::less<std::string>, std::allocator<std::string>> &, char const*);
    void parse(Json::Value const&, std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> &, char const*);
    void parse(Json::Value const&, std::vector<std::string, std::allocator<std::string>> &, char const*);
    void parse(Json::Value const&, std::vector<Util::HashString, std::allocator<Util::HashString>> &, char const*);
    void parse(Json::Value const&, std::vector<ActorDefinitionIdentifier, std::allocator<ActorDefinitionIdentifier>> &, char const*, char const*);
    void parse(Json::Value const&, std::vector<LevelSoundEvent, std::allocator<LevelSoundEvent>> &, char const*, char const*);
    void parse(Json::Value const&, Item const*&, char const*, char const*);
    void parse(Json::Value const&, ItemDefinition &, char const*, char const*);
    void parse(Json::Value const&, ItemDescriptor &);
    void parse(Json::Value const&, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> &);
    void parse(Json::Value const&, DefinitionTrigger &, char const*);
    void parse(Json::Value const&, DefinitionTrigger &);
    void parse(Json::Value const&, FilterGroup &, char const*, char const*);
    void parse(Json::Value const&, GameVersion &, char const*, GameVersion const&);
    void parse(Json::Value const&, std::vector<SlotDropChance, std::allocator<SlotDropChance>> &, char const*);
    void parse(Json::Value const&, std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> &, char const*);
    void parse(Json::Value const&, Block const*&, char const*);
    void parse(Json::Value &, WeightedChoices<DefinitionTrigger> &, char const*);
    void parse(Json::Value const&, std::vector<DefinitionTrigger, std::allocator<DefinitionTrigger>> &);
    void serialize(Item const*, Json::Value &, char const*);
    void serialize(ItemDefinition const&, Json::Value &, char const*);
    void serialize(DefinitionTrigger const&, Json::Value &, char const*);
    void serialize(MobEffectInstance const&, Json::Value &, char const*);
    void serialize(FloatRange const&, Json::Value &, char const*);
    void serialize(IntRange const&, Json::Value &, char const*);
    void serialize(Vec2 const&, Json::Value &, char const*);
    void serialize(Vec3 const&, Json::Value &, char const*);
    void serialize(ParticleType const&, Json::Value &, char const*);
    void serialize(Difficulty const&, Json::Value &, char const*);
    void serialize(Util::HashString const&, Json::Value &, char const*);
    void serialize(ActorDamageCause const&, Json::Value &, char const*);
    void serialize(ActorDefinitionIdentifier const&, Json::Value &, char const*);
    void serialize(ActorFilterGroup const&, Json::Value &, char const*);
    void serialize(ActorType const&, Json::Value &, char const*);
    void serialize(std::set<Item const*, std::less<Item const*>, std::allocator<Item const*>> const&, Json::Value &, char const*);
    void serialize(std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&, Json::Value &, char const*);
    void serialize(std::set<std::string, std::less<std::string>, std::allocator<std::string>> const&, Json::Value &, char const*);
    void serialize(std::set<Util::HashString, Util::HashString::HashFunc, std::allocator<Util::HashString>> const&, Json::Value &, char const*);
    void serialize(std::vector<std::string, std::allocator<std::string>> const&, Json::Value &, char const*);
    void serialize(std::vector<Util::HashString, std::allocator<Util::HashString>> const&, Json::Value &, char const*);
    void serialize(std::vector<ActorDefinitionIdentifier, std::allocator<ActorDefinitionIdentifier>> const&, Json::Value &, char const*);
    void serialize(std::vector<LevelSoundEvent, std::allocator<LevelSoundEvent>> const&, Json::Value &, char const*);
    void serialize(std::vector<SlotDropChance, std::allocator<SlotDropChance>> const&, Json::Value &, char const*);
    void serialize(std::vector<ItemInstance, std::allocator<ItemInstance>> const&, Json::Value &, char const*);
    void serialize(std::vector<ItemStack, std::allocator<ItemStack>> const&, Json::Value &, char const*);
    void serialize(std::vector<Item const*, std::allocator<Item const*>> const&, Json::Value &, char const*);
    void serialize(std::vector<ItemDescriptor, std::allocator<ItemDescriptor>> const&, Json::Value &, char const*);
    void serialize(std::vector<MobEffectInstance, std::allocator<MobEffectInstance>> const&, Json::Value &, char const*);
    void serialize(FilterGroup const&, Json::Value &, char const*);
    void serialize(GameVersion const&, Json::Value &, char const*);
};
