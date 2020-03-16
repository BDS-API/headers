#pragma once

#include "ScriptBinderComponent.h"


class ScriptBlockPositionBinderComponent : public ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptBlockPositionBinderComponent(); // _ZN34ScriptBlockPositionBinderComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK34ScriptBlockPositionBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN34ScriptBlockPositionBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptBlockPositionBinderComponent(); // _ZN34ScriptBlockPositionBinderComponentC2Ev
    ScriptBlockPositionBinderComponent(BlockPos const&); // _ZN34ScriptBlockPositionBinderComponentC2ERK8BlockPos
    void getPosition()const; // _ZNK34ScriptBlockPositionBinderComponent11getPositionEv
};
