#pragma once

#include <functional>


class RenderParams {

public:
//  void _setBaseActorRenderContext(BaseActorRenderContext *, bool); //TODO: incomplete function definition
    RenderParams();
//  void init(BaseActorRenderContext *, Actor *, AnimationComponent *, MolangVariableMap *, DataDrivenModel *, float, float, int, bool, std::function<float (void)>); //TODO: incomplete function definition
    void operator[](unsigned long);
    ~RenderParams();
};
