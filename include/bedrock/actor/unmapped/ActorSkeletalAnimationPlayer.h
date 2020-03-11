#pragma once

#include <utility>
#include <unordered_map>
#include "../Actor.h"
#include "../../../unmapped/RenderParams.h"
#include "../../../unmapped/HashedString.h"
#include "../../../unmapped/BoneOrientation.h"
#include <memory>
#include "../../../unmapped/ExpressionNode.h"
#include "../../../unmapped/AnimationComponent.h"
#include "./ActorSkeletalAnimationPtr.h"
#include <vector>
#include "../../../unmapped/StringKey.h"
#include <functional>
#include "./ActorAnimationPlayer.h"
#include <string>


class ActorSkeletalAnimationPlayer : ActorAnimationPlayer {

public:
    virtual ~ActorSkeletalAnimationPlayer();
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float); //TODO: incomplete function definition
    virtual void resetAnimation();
    virtual void buildBoneToPartMapping(AnimationComponent &);
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    ActorSkeletalAnimationPlayer(HashedString const&, ActorSkeletalAnimationPtr, AnimationComponent &, ExpressionNode const&);
    void _fireParticleEvents(RenderParams &);
    void _fireSoundEvents(RenderParams &);
    void _fireEvents(RenderParams &, Actor &)const;
    void setBlendWeight(ExpressionNode const&);
    bool isValid()const;
    void getRawAnimationName()const;
    void setAnimationDataPtr(ActorSkeletalAnimationPtr &);
    void getAnimationData()const;
};
