#pragma once

#include "ScriptBinderComponent.h"


class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptTickingAreaBinderComponent(); // _ZN32ScriptTickingAreaBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK32ScriptTickingAreaBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN32ScriptTickingAreaBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptTickingAreaBinderComponent(); // _ZN32ScriptTickingAreaBinderComponentC2Ev
    ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&); // _ZN32ScriptTickingAreaBinderComponentC2EON9ScriptApi18ScriptObjectHandleE
    void getData()const; // _ZNK32ScriptTickingAreaBinderComponent7getDataEv
};
