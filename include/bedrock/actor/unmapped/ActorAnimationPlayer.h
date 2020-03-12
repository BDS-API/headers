#pragma once

#include <string>
#include <unordered_map>
#include "../../../unmapped/AnimationComponent.h"
#include "../../../unmapped/HashedString.h"
#include <functional>
#include "../../../unmapped/ExpressionNode.h"
#include <memory>
#include "../../../unmapped/StringKey.h"
#include <utility>


class ActorAnimationPlayer {

public:
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
    ~ActorAnimationPlayer();
    virtual void buildBoneToPartMapping(AnimationComponent &);
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
    ActorAnimationPlayer(HashedString const&, ExpressionNode const&);
};
