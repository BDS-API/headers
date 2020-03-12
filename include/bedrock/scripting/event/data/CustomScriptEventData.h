#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../../json/Value.h"


class CustomScriptEventData : ScriptEventData {

public:
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~CustomScriptEventData();
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    CustomScriptEventData(std::string const&);
    void setData(std::string const&);
    void setData(Json::Value const&);
};
