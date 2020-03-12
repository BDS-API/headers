#pragma once

#include "../bedrock/actor/unmapped/ActorAnimationPlayer.h"
#include <unordered_map>
#include "BoneOrientation.h"
#include "RenderParams.h"
#include <functional>
#include <vector>
#include <memory>
#include "HashedString.h"
#include <utility>


class DefaultEmptyActorAnimationPlayer : ActorAnimationPlayer {

public:
    virtual void findAnimation(HashedString const&);
    virtual bool hasAnimationFinished()const;
//  virtual void applyToPose(RenderParams &, std::unordered_map<SkeletalHierarchyIndex, std::vector<BoneOrientation>, std::hash<SkeletalHierarchyIndex>, std::equal_to<SkeletalHierarchyIndex>, std::allocator<std::pair<SkeletalHierarchyIndex const, std::vector<BoneOrientation>>>> &, float); //TODO: incomplete function definition
    virtual void getAnimationType()const;
    ~DefaultEmptyActorAnimationPlayer();
    virtual void resetAnimation();
    DefaultEmptyActorAnimationPlayer();
};
