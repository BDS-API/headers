#pragma once

class RenderParams {

public:

    RenderParams(void);
    void init(BaseActorRenderContext *, Actor *, AnimationComponent *, MolangVariableMap *, DataDrivenModel *, float, float, int, bool, std::function<float ()(void)>);
    void _setBaseActorRenderContext(BaseActorRenderContext *, bool);
};
