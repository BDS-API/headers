#pragma once

#include <unordered_map>


class ActorAnimationPlayer {

public:
    virtual ~ActorAnimationPlayer(); // _ZN20ActorAnimationPlayerD2Ev
    virtual void __fake_function0(); // fake
    virtual void buildBoneToPartMapping(AnimationComponent &); // _ZN20ActorAnimationPlayer22buildBoneToPartMappingER18AnimationComponent
    virtual void bindParticleEffects(std::unordered_map<StringKey, long, std::hash<StringKey>, long, std::allocator<std::pair<StringKey const, long>>> const&); // _ZN20ActorAnimationPlayer19bindParticleEffectsERKSt13unordered_mapI9StringKey17ParticleEffectPtrSt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S2_EEE
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, long, std::allocator<std::pair<StringKey const, std::string>>> const&); // _ZN20ActorAnimationPlayer16bindSoundEffectsERKSt13unordered_mapI9StringKeyNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    ActorAnimationPlayer(HashedString const&, ExpressionNode const&); // _ZN20ActorAnimationPlayerC2ERK12HashedStringRK14ExpressionNode
};
