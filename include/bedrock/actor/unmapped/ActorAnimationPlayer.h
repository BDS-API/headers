#pragma once

#include <utility>
#include <unordered_map>
#include "../../../unmapped/HashedString.h"
#include <memory>
#include "../../../unmapped/ExpressionNode.h"
#include "../../../unmapped/AnimationComponent.h"
#include "../../../unmapped/StringKey.h"
#include <functional>
#include <string>


class ActorAnimationPlayer {

public:
    virtual ~ActorAnimationPlayer();
    virtual void buildBoneToPartMapping(AnimationComponent &);
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition

    ActorAnimationPlayer(HashedString const&, ExpressionNode const&);
};
