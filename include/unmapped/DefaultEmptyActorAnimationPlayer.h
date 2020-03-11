#pragma once

#include <utility>
#include <unordered_map>
#include "./RenderParams.h"
#include "./HashedString.h"
#include <memory>
#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"
#include "./BoneOrientation.h"
#include <vector>
#include <functional>


class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    virtual ~DefaultEmptyActorAnimationPlayer();
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation, std::allocator<BoneOrientation>>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation, std::allocator<BoneOrientation>>>>> &, float); //TODO: incomplete function definition
    virtual void resetAnimation();
    virtual bool hasAnimationFinished()const;
    virtual void findAnimation(HashedString const&);
    virtual void getAnimationType()const;

    DefaultEmptyActorAnimationPlayer();
};
