#pragma once

#include "AnimationComponent.h"
#include "MolangVariableMap.h"
#include <functional>
#include "../bedrock/actor/Actor.h"


class RenderParams {

public:
//  void init(BaseActorRenderContext *, Actor *, AnimationComponent *, MolangVariableMap *, DataDrivenModel *, float, float, int, bool, std::function<float (void)>); //TODO: incomplete function definition
    RenderParams();
//  void _setBaseActorRenderContext(BaseActorRenderContext *, bool); //TODO: incomplete function definition
    ~RenderParams();
    void operator[](unsigned long);
};
