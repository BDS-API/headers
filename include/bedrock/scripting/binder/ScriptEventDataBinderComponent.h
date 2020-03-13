#pragma once

#include "ScriptBinderComponent.h"


class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptEventDataBinderComponent(); // _ZN30ScriptEventDataBinderComponentD2Ev
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptEventDataBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN30ScriptEventDataBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptEventDataBinderComponent(); // _ZN30ScriptEventDataBinderComponentC2Ev
    ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&); // _ZN30ScriptEventDataBinderComponentC2EON9ScriptApi18ScriptObjectHandleE
    void getData()const; // _ZNK30ScriptEventDataBinderComponent7getDataEv
};
