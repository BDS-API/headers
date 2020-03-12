#pragma once

#include "../../../unmapped/BoneOrientation.h"
#include <string>
#include "../../../unmapped/RenderParams.h"
#include "ActorAnimationControllerPtr.h"
#include <unordered_map>
#include "ActorAnimationPlayer.h"
#include "../../../unmapped/AnimationComponent.h"
#include "../../../unmapped/HashedString.h"
#include <functional>
#include "../../../unmapped/ExpressionNode.h"
#include <vector>
#include <memory>
#include "../../../unmapped/StringKey.h"
#include <utility>


class ActorAnimationControllerPlayer : ActorAnimationPlayer {

public:
    virtual void resetAnimation();
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); //TODO: incomplete function definition
    virtual void getAnimationType()const;
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    ~ActorAnimationControllerPlayer();
    void setNextState(HashedString const&);
    void getStatePlayer(HashedString const&, AnimationComponent &, bool);
    void findStatePlayer(HashedString const&);
    void calculateBlendTransitionWeight(RenderParams &);
//  void blendViaShortestPath(std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float, float); //TODO: incomplete function definition
    void clearAnimationStateFromAnimationComponent(RenderParams &)const;
    void setAnimationStateToAnimationComponent(RenderParams &, int)const;
    ActorAnimationControllerPlayer(HashedString const&, ActorAnimationControllerPtr const&, AnimationComponent &, ExpressionNode const&);
    void transitionToState(int);
//  void applyStateAnimationToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); //TODO: incomplete function definition
};
