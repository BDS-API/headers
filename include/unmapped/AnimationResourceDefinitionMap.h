#pragma once

#include "ExpressionNode.h"
#include <string>
#include "../bedrock/actor/unmapped/ActorAnimationControllerPtr.h"
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include <vector>
#include "HashedString.h"
#include <utility>


class AnimationResourceDefinitionMap {

public:
    void getAnimations();
    void getAnimationControllers();
    ~AnimationResourceDefinitionMap();
    void getAnimationControllers()const;
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>> const&);
    void removeActorAnimateScript(HashedString const&);
    void getAnimateScriptArray()const;
    void getAnimateScriptArray();
    void mergeAnimation(std::string const&, ActorSkeletalAnimationPtr);
    bool isAnimationResourceDefinitionMapEmpty()const;
    void getAnimations()const;
    void mergeAnimationController(std::string const&, ActorAnimationControllerPtr);
    AnimationResourceDefinitionMap();
};
