#pragma once

#include "ScriptBinderComponent.h"


class ScriptComponentBinderComponent : public ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptComponentBinderComponent(); // _ZN30ScriptComponentBinderComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptComponentBinderComponent9serializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN30ScriptComponentBinderComponent11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    ScriptComponentBinderComponent(); // _ZN30ScriptComponentBinderComponentC2Ev
    ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&); // _ZN30ScriptComponentBinderComponentC2EON9ScriptApi18ScriptObjectHandleE
    void getData()const; // _ZNK30ScriptComponentBinderComponent7getDataEv
};
