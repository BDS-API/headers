#pragma once

#include <utility>
#include <unordered_map>
#include "../../../unmapped/RenderParams.h"
#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/BoneOrientation.h"
#include <memory>
#include "./ActorAnimationControllerPtr.h"
#include "../../../unmapped/ExpressionNode.h"
#include "../../../unmapped/AnimationComponent.h"
#include <vector>
#include "../../../unmapped/StringKey.h"
#include <functional>
#include "./ActorAnimationPlayer.h"
#include <string>


class ActorAnimationControllerPlayer : ActorAnimationPlayer {

public:
    virtual ~ActorAnimationControllerPlayer();
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float); //TODO: incomplete function definition
    virtual void resetAnimation();
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
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
//  void applyStateAnimationToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float); //TODO: incomplete function definition
//  void blendViaShortestPath(std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float, float); //TODO: incomplete function definition
};
