#pragma once

#include "../../../unmapped/StringKey"
#include "../../../unmapped/ExpressionNode"
#include "../../../unmapped/AnimationComponent"
#include "../../../unmapped/HashedString"


class ActorAnimationPlayer {

public:
    virtual ActorAnimationPlayer::~ActorAnimationPlayer()
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);

    ActorAnimationPlayer(HashedString const&, ExpressionNode const&);
};
