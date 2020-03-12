#pragma once

#include <string>
#include "ScriptEventData.h"


class CustomScriptEventData : ScriptEventData {

public:
    ~CustomScriptEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setData(Json::Value const&);
    CustomScriptEventData(std::string const&);
    void setData(std::string const&);
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
};
