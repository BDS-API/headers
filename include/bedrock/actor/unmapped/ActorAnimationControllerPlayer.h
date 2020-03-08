#pragma once

#include "../../../unmapped/StringKey"
#include "../../../unmapped/AnimationComponent"
#include "../../../unmapped/HashedString"
#include "../../../unmapped/BoneOrientation"
#include "../../../unmapped/RenderParams"
#include "../../../unmapped/ExpressionNode"


class ActorAnimationControllerPlayer : ActorAnimationPlayer {

public:
    virtual ActorAnimationControllerPlayer::~ActorAnimationControllerPlayer()
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation();
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    void setAnimationStateToAnimationComponent(RenderParams &, int)const;
    void clearAnimationStateFromAnimationComponent(RenderParams &)const;
    void findStatePlayer(HashedString const&);
    void getStatePlayer(HashedString const&, AnimationComponent &, bool);
    void setNextState(HashedString const&);
    ActorAnimationControllerPlayer(HashedString const&, ActorAnimationControllerPtr const&, AnimationComponent &, ExpressionNode const&);
    void transitionToState(int);
    void calculateBlendTransitionWeight(RenderParams &);
    void applyStateAnimationToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    void blendViaShortestPath(std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float, float);
};
