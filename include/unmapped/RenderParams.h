#pragma once

#include "../bedrock/actor/Actor.h"
#include <functional>
#include "./AnimationComponent.h"
#include "./MolangVariableMap.h"


class RenderParams {

public:

    ~RenderParams();
    RenderParams();
//  void init(BaseActorRenderContext *, Actor *, AnimationComponent *, MolangVariableMap *, DataDrivenModel *, float, float, int, bool, std::function<float (void)>); //TODO: incomplete function definition
//  void _setBaseActorRenderContext(BaseActorRenderContext *, bool); //TODO: incomplete function definition
    void operator[](unsigned long);
};
