#pragma once

#include "./ExpressionNode.h"
#include <utility>
#include "./HashedString.h"
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"
#include <memory>
#include "../bedrock/actor/unmapped/ActorAnimationControllerPtr.h"
#include <vector>
#include <string>


class AnimationResourceDefinitionMap {

public:

    AnimationResourceDefinitionMap();
    ~AnimationResourceDefinitionMap();
    bool isAnimationResourceDefinitionMapEmpty()const;
    void getAnimations();
    void getAnimations()const;
    void getAnimationControllers();
    void getAnimationControllers()const;
    void getAnimateScriptArray();
    void getAnimateScriptArray()const;
    void mergeAnimation(std::string const&, ActorSkeletalAnimationPtr);
    void mergeAnimationController(std::string const&, ActorAnimationControllerPtr);
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>, std::allocator<std::pair<HashedString, ExpressionNode>>> const&);
    void removeActorAnimateScript(HashedString const&);
};
