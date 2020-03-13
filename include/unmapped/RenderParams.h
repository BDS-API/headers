#pragma once

#include <functional>


class RenderParams {

public:
    ~RenderParams(); // _ZN12RenderParamsD2Ev
    RenderParams(); // _ZN12RenderParamsC2Ev
//  void init(BaseActorRenderContext *, Actor *, AnimationComponent *, MolangVariableMap *, DataDrivenModel *, float, float, int, bool, std::function<float (void)>); //TODO: incomplete function definition // _ZN12RenderParams4initEP22BaseActorRenderContextP5ActorP18AnimationComponentP17MolangVariableMapP15DataDrivenModelffibSt8functionIFfvEE
//  void _setBaseActorRenderContext(BaseActorRenderContext *, bool); //TODO: incomplete function definition // _ZN12RenderParams26_setBaseActorRenderContextEP22BaseActorRenderContextb
    void operator[](unsigned long); // _ZN12RenderParamsixEm
};
