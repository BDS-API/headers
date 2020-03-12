#pragma once

#include "../../../unmapped/BoneOrientation.h"
#include <string>
#include "../../../unmapped/RenderParams.h"
#include "ActorAnimationPlayer.h"
#include <unordered_map>
#include "ActorAnimationControllerPlayer.h"
#include "../../../unmapped/AnimationComponent.h"
#include "ActorAnimationControllerState.h"
#include "ActorSkeletalAnimationPtr.h"
#include "../../../unmapped/HashedString.h"
#include <functional>
#include "../../../unmapped/ExpressionNode.h"
#include <vector>
#include <memory>
#include "../../../unmapped/StringKey.h"
#include <utility>


class ActorAnimationControllerStatePlayer : ActorAnimationPlayer {

public:
    virtual bool hasAnimationFinished()const;
    virtual void getAnimationType()const;
    virtual void findAnimation(HashedString const&);
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); //TODO: incomplete function definition
    virtual void resetAnimation();
    ~ActorAnimationControllerStatePlayer();
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
    void postApplyToPose(RenderParams &)const;
    void addAnimation(AnimationComponent &, HashedString const&, ActorSkeletalAnimationPtr);
    void calculateBlendTransitionWeight(float)const;
    void anyAnimationsFinished()const;
    void blendViaShortestPath()const;
    void allAnimationsFinished()const;
    void getBlendTransitionKeyFrames()const;
    void preApplyToPose(RenderParams &)const;
    void addTransition(std::string const&, std::string const&, bool);
    ActorAnimationControllerStatePlayer(HashedString const&, ActorAnimationControllerPlayer &, std::shared_ptr<ActorAnimationControllerState>, AnimationComponent &, ExpressionNode const&);
};
