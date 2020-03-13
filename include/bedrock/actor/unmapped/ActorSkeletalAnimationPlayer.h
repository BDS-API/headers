#pragma once

#include "ActorAnimationPlayer.h"
#include <unordered_map>
#include "ActorSkeletalAnimationPtr.h"


class ActorSkeletalAnimationPlayer : ActorAnimationPlayer {

public:
    ~ActorSkeletalAnimationPlayer(); // _ZN28ActorSkeletalAnimationPlayerD2Ev
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); // _ZN28ActorSkeletalAnimationPlayer11applyToPoseER12RenderParamsRSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS5_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEEf
    virtual void resetAnimation(); // _ZN28ActorSkeletalAnimationPlayer14resetAnimationEv
    virtual void buildBoneToPartMapping(AnimationComponent &); // _ZN28ActorSkeletalAnimationPlayer22buildBoneToPartMappingER18AnimationComponent
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); // _ZN28ActorSkeletalAnimationPlayer19bindParticleEffectsERKSt13unordered_mapI9StringKey17ParticleEffectPtrSt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S2_EEE
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); // _ZN28ActorSkeletalAnimationPlayer16bindSoundEffectsERKSt13unordered_mapI9StringKeyNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    virtual bool hasAnimationFinished()const; // _ZNK28ActorSkeletalAnimationPlayer20hasAnimationFinishedEv
    virtual void findAnimation(HashedString const&); // _ZN28ActorSkeletalAnimationPlayer13findAnimationERK12HashedString
    virtual void getAnimationType()const; // _ZNK28ActorSkeletalAnimationPlayer16getAnimationTypeEv
    ActorSkeletalAnimationPlayer(HashedString const&, ActorSkeletalAnimationPtr, AnimationComponent &, ExpressionNode const&); // _ZN28ActorSkeletalAnimationPlayerC2ERK12HashedString25ActorSkeletalAnimationPtrR18AnimationComponentRK14ExpressionNode
    void _fireParticleEvents(RenderParams &); // _ZN28ActorSkeletalAnimationPlayer19_fireParticleEventsER12RenderParams
    void _fireSoundEvents(RenderParams &); // _ZN28ActorSkeletalAnimationPlayer16_fireSoundEventsER12RenderParams
    void _fireEvents(RenderParams &, Actor &)const; // _ZNK28ActorSkeletalAnimationPlayer11_fireEventsER12RenderParamsR5Actor
    void setBlendWeight(ExpressionNode const&); // _ZN28ActorSkeletalAnimationPlayer14setBlendWeightERK14ExpressionNode
    bool isValid()const; // _ZNK28ActorSkeletalAnimationPlayer7isValidEv
    void getRawAnimationName()const; // _ZNK28ActorSkeletalAnimationPlayer19getRawAnimationNameEv
    void setAnimationDataPtr(ActorSkeletalAnimationPtr &); // _ZN28ActorSkeletalAnimationPlayer19setAnimationDataPtrER25ActorSkeletalAnimationPtr
    void getAnimationData()const; // _ZNK28ActorSkeletalAnimationPlayer16getAnimationDataEv
};
