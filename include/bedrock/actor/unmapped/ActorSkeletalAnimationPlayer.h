#pragma once

#include "../../../unmapped/BoneOrientation.h"
#include <string>
#include "../../../unmapped/RenderParams.h"
#include "../Actor.h"
#include "ActorAnimationPlayer.h"
#include <unordered_map>
#include "../../../unmapped/AnimationComponent.h"
#include "../../../unmapped/HashedString.h"
#include "ActorSkeletalAnimationPtr.h"
#include <functional>
#include "../../../unmapped/ExpressionNode.h"
#include <vector>
#include <memory>
#include "../../../unmapped/StringKey.h"
#include <utility>


class ActorSkeletalAnimationPlayer : ActorAnimationPlayer {

public:
    virtual void findAnimation(HashedString const&);
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); //TODO: incomplete function definition
    virtual void getAnimationType()const;
    virtual void buildBoneToPartMapping(AnimationComponent &);
    virtual bool hasAnimationFinished()const;
//  virtual void bindParticleEffects(std::unordered_map<StringKey, ParticleEffectPtr, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, ParticleEffectPtr>>> const&); //TODO: incomplete function definition
//  virtual void bindSoundEffects(std::unordered_map<StringKey, std::string, std::hash<StringKey>, std::equal_to<StringKey>, std::allocator<std::pair<StringKey const, std::string>>> const&); //TODO: incomplete function definition
    virtual void resetAnimation();
    ~ActorSkeletalAnimationPlayer();
    void _fireSoundEvents(RenderParams &);
    void setBlendWeight(ExpressionNode const&);
    void getAnimationData()const;
    void _fireEvents(RenderParams &, Actor &)const;
    void getRawAnimationName()const;
    void setAnimationDataPtr(ActorSkeletalAnimationPtr &);
    ActorSkeletalAnimationPlayer(HashedString const&, ActorSkeletalAnimationPtr, AnimationComponent &, ExpressionNode const&);
    bool isValid()const;
    void _fireParticleEvents(RenderParams &);
};
