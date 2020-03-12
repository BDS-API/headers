#pragma once

#include "ActorSkeletalAnimationPtr.h"
#include "ActorAnimationPlayer.h"
#include <memory>
#include <string>
#include <unordered_map>


class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

public:
    virtual void getAnimationType()const;
    virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&);
    ~ActorAnimationControllerStatePlayer();
    virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&);
    virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float);
    virtual bool hasAnimationFinished()const;
    virtual void resetAnimation();
    virtual void findAnimation(HashedString const&);
    void addTransition(std::string const&, std::string const&, bool);
    void getBlendTransitionKeyFrames()const;
    void addAnimation(AnimationComponent &, HashedString const&, ActorSkeletalAnimationPtr);
    void anyAnimationsFinished()const;
    void blendViaShortestPath()const;
    void calculateBlendTransitionWeight(float)const;
    void postApplyToPose(RenderParams &)const;
    ActorAnimationControllerStatePlayer(HashedString const&, ActorAnimationControllerPlayer &, std::shared_ptr<ActorAnimationControllerState>, AnimationComponent &, ExpressionNode const&);
    void allAnimationsFinished()const;
    void preApplyToPose(RenderParams &)const;
};
