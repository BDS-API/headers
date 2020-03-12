#pragma once

#include <unordered_map>
#include "ActorAnimationPlayer.h"


class ActorAnimationControllerPlayer : ActorAnimationPlayer {

public:
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished()const;
    virtual void resetAnimation();
    ~ActorAnimationControllerPlayer();
    virtual void getAnimationType()const;
    virtual void findAnimation(HashedString const&);
    void setNextState(HashedString const&);
    void getStatePlayer(HashedString const&, AnimationComponent &, bool);
    void transitionToState(int);
    void blendViaShortestPath(std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float, float);
    void clearAnimationStateFromAnimationComponent(RenderParams &)const;
    ActorAnimationControllerPlayer(HashedString const&, ActorAnimationControllerPtr const&, AnimationComponent &, ExpressionNode const&);
    void findStatePlayer(HashedString const&);
    void calculateBlendTransitionWeight(RenderParams &);
    void setAnimationStateToAnimationComponent(RenderParams &, int)const;
    void applyStateAnimationToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float);
};
