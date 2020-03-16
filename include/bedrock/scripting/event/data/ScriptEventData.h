#pragma once

#include <string>


class ScriptEventData {

public:
    virtual ~ScriptEventData(); // _ZN15ScriptEventDataD2Ev
    virtual void __fake_function0(); // fake
    ScriptEventData(std::string const&); // _ZN15ScriptEventDataC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const; // _ZNK15ScriptEventData9serializeER12ScriptEngineR9EventInfoRN9ScriptApi18ScriptObjectHandleE
    std::string getName()const; // _ZNK15ScriptEventData7getNameB5cxx11Ev
};
