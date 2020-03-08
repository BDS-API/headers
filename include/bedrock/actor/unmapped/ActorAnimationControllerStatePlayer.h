#pragma once

#include "../../../unmapped/StringKey"
#include "../../../unmapped/AnimationComponent"
#include "../../../unmapped/HashedString"
#include "../../../unmapped/BoneOrientation"
#include "../../../unmapped/RenderParams"
#include "../../../unmapped/ExpressionNode"


class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

public:
    virtual ActorAnimationControllerStatePlayer::~ActorAnimationControllerStatePlayer()
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float);
    virtual void resetAnimation();
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    void preApplyToPose(RenderParams &)const;
    void postApplyToPose(RenderParams &)const;
    void anyAnimationsFinished()const;
    void allAnimationsFinished()const;
    void blendViaShortestPath()const;
    void getBlendTransitionKeyFrames()const;
    void calculateBlendTransitionWeight(float)const;
    ActorAnimationControllerStatePlayer(HashedString const&, ActorAnimationControllerPlayer &, std::shared_ptr<ActorAnimationControllerState>, AnimationComponent &, ExpressionNode const&);
    void addAnimation(AnimationComponent &, HashedString const&, ActorSkeletalAnimationPtr);
    void addTransition(std::string const&, std::string const&, bool);
};
