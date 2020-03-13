#pragma once

#include <string>
#include "ScriptEventData.h"


class CustomScriptEventData : ScriptEventData {

public:
    ~CustomScriptEventData(); // _ZN21CustomScriptEventDataD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK21CustomScriptEventData10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    CustomScriptEventData(std::string const&); // _ZN21CustomScriptEventDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&); // _ZN21CustomScriptEventData7setDataER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
    void setData(Json::Value const&); // _ZN21CustomScriptEventData7setDataERKN4Json5ValueE
    void setData(std::string const&); // _ZN21CustomScriptEventData7setDataERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
