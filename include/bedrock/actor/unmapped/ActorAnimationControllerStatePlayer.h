#pragma once

#include <unordered_map>
#include <memory>
#include <string>
#include "ActorSkeletalAnimationPtr.h"
#include "ActorAnimationPlayer.h"


class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

public:
    ~ActorAnimationControllerStatePlayer(); // _ZN35ActorAnimationControllerStatePlayerD2Ev
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); // _ZN35ActorAnimationControllerStatePlayer11applyToPoseER12RenderParamsRSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS5_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEEf
    virtual void resetAnimation(); // _ZN35ActorAnimationControllerStatePlayer14resetAnimationEv
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); // _ZN35ActorAnimationControllerStatePlayer19bindParticleEffectsERKSt13unordered_mapI9StringKey17ParticleEffectPtrSt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S2_EEE
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); // _ZN35ActorAnimationControllerStatePlayer16bindSoundEffectsERKSt13unordered_mapI9StringKeyNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    virtual bool hasAnimationFinished()const; // _ZNK35ActorAnimationControllerStatePlayer20hasAnimationFinishedEv
    virtual void findAnimation(HashedString const&); // _ZN35ActorAnimationControllerStatePlayer13findAnimationERK12HashedString
    virtual void getAnimationType()const; // _ZNK35ActorAnimationControllerStatePlayer16getAnimationTypeEv
    void preApplyToPose(RenderParams &)const; // _ZNK35ActorAnimationControllerStatePlayer14preApplyToPoseER12RenderParams
    void postApplyToPose(RenderParams &)const; // _ZNK35ActorAnimationControllerStatePlayer15postApplyToPoseER12RenderParams
    void anyAnimationsFinished()const; // _ZNK35ActorAnimationControllerStatePlayer21anyAnimationsFinishedEv
    void allAnimationsFinished()const; // _ZNK35ActorAnimationControllerStatePlayer21allAnimationsFinishedEv
    void blendViaShortestPath()const; // _ZNK35ActorAnimationControllerStatePlayer20blendViaShortestPathEv
    void getBlendTransitionKeyFrames()const; // _ZNK35ActorAnimationControllerStatePlayer27getBlendTransitionKeyFramesEv
    void calculateBlendTransitionWeight(float)const; // _ZNK35ActorAnimationControllerStatePlayer30calculateBlendTransitionWeightEf
    ActorAnimationControllerStatePlayer(HashedString const&, ActorAnimationControllerPlayer &, std::shared_ptr<ActorAnimationControllerState>, AnimationComponent &, ExpressionNode const&); // _ZN35ActorAnimationControllerStatePlayerC2ERK12HashedStringR30ActorAnimationControllerPlayerSt10shared_ptrI29ActorAnimationControllerStateER18AnimationComponentRK14ExpressionNode
    void addAnimation(AnimationComponent &, HashedString const&, ActorSkeletalAnimationPtr); // _ZN35ActorAnimationControllerStatePlayer12addAnimationER18AnimationComponentRK12HashedString25ActorSkeletalAnimationPtr
    void addTransition(std::string const&, std::string const&, bool); // _ZN35ActorAnimationControllerStatePlayer13addTransitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
};
