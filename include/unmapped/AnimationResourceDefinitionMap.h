#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorAnimationControllerPtr.h"
#include <vector>
#include "../bedrock/actor/unmapped/ActorSkeletalAnimationPtr.h"


class AnimationResourceDefinitionMap {

public:
    void getAnimations();
    void getAnimateScriptArray();
    void mergeAnimationController(std::string const&, ActorAnimationControllerPtr);
    AnimationResourceDefinitionMap();
    void mergeAnimation(std::string const&, ActorSkeletalAnimationPtr);
    void getAnimationControllers()const;
    void getAnimateScriptArray()const;
    bool isAnimationResourceDefinitionMapEmpty()const;
    void getAnimationControllers();
    void removeActorAnimateScript(HashedString const&);
    ~AnimationResourceDefinitionMap();
    void getAnimations()const;
    void mergeActorAnimateScriptArray(std::vector<std::pair<HashedString, ExpressionNode>> const&);
};
