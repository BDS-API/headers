#pragma once

#include <unordered_map>


class ActorAnimationPlayer {

public:
    ~ActorAnimationPlayer(); // _ZN20ActorAnimationPlayerD2Ev
    virtual void buildBoneToPartMapping(AnimationComponent &); // _ZN20ActorAnimationPlayer22buildBoneToPartMappingER18AnimationComponent
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); // _ZN20ActorAnimationPlayer19bindParticleEffectsERKSt13unordered_mapI9StringKey17ParticleEffectPtrSt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S2_EEE
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); // _ZN20ActorAnimationPlayer16bindSoundEffectsERKSt13unordered_mapI9StringKeyNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    ActorAnimationPlayer(HashedString const&, ExpressionNode const&); // _ZN20ActorAnimationPlayerC2ERK12HashedStringRK14ExpressionNode
};
