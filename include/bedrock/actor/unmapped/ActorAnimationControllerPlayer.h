#pragma once

#include "ActorAnimationPlayer.h"
#include <unordered_map>


class ActorAnimationControllerPlayer : ActorAnimationPlayer {

public:
    ~ActorAnimationControllerPlayer(); // _ZN30ActorAnimationControllerPlayerD2Ev
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); // _ZN30ActorAnimationControllerPlayer11applyToPoseER12RenderParamsRSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS5_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEEf
    virtual void resetAnimation(); // _ZN30ActorAnimationControllerPlayer14resetAnimationEv
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); // _ZN30ActorAnimationControllerPlayer19bindParticleEffectsERKSt13unordered_mapI9StringKey17ParticleEffectPtrSt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S2_EEE
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); // _ZN30ActorAnimationControllerPlayer16bindSoundEffectsERKSt13unordered_mapI9StringKeyNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S7_EEE
    virtual bool hasAnimationFinished()const; // _ZNK30ActorAnimationControllerPlayer20hasAnimationFinishedEv
    virtual void findAnimation(HashedString const&); // _ZN30ActorAnimationControllerPlayer13findAnimationERK12HashedString
    virtual void getAnimationType()const; // _ZNK30ActorAnimationControllerPlayer16getAnimationTypeEv
    void setAnimationStateToAnimationComponent(RenderParams &, int)const; // _ZNK30ActorAnimationControllerPlayer37setAnimationStateToAnimationComponentER12RenderParamsi
    void clearAnimationStateFromAnimationComponent(RenderParams &)const; // _ZNK30ActorAnimationControllerPlayer41clearAnimationStateFromAnimationComponentER12RenderParams
    void findStatePlayer(HashedString const&); // _ZN30ActorAnimationControllerPlayer15findStatePlayerERK12HashedString
    void getStatePlayer(HashedString const&, AnimationComponent &, bool); // _ZN30ActorAnimationControllerPlayer14getStatePlayerERK12HashedStringR18AnimationComponentb
    void setNextState(HashedString const&); // _ZN30ActorAnimationControllerPlayer12setNextStateERK12HashedString
    ActorAnimationControllerPlayer(HashedString const&, ActorAnimationControllerPtr const&, AnimationComponent &, ExpressionNode const&); // _ZN30ActorAnimationControllerPlayerC2ERK12HashedStringRK27ActorAnimationControllerPtrR18AnimationComponentRK14ExpressionNode
    void transitionToState(int); // _ZN30ActorAnimationControllerPlayer17transitionToStateEi
    void calculateBlendTransitionWeight(RenderParams &); // _ZN30ActorAnimationControllerPlayer30calculateBlendTransitionWeightER12RenderParams
    void applyStateAnimationToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); // _ZN30ActorAnimationControllerPlayer25applyStateAnimationToPoseER12RenderParamsRSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS5_EESt4hashIS3_ESt8equal_toIS3_ESaISt4pairIKS3_S7_EEEf
    void blendViaShortestPath(std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float, float); // _ZN30ActorAnimationControllerPlayer20blendViaShortestPathERSt13unordered_mapI22SkeletalHierarchyIndexSt6vectorI15BoneOrientationSaIS3_EESt4hashIS1_ESt8equal_toIS1_ESaISt4pairIKS1_S5_EEESF_SF_ff
};
