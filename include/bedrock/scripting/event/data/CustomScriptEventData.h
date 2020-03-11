#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../../json/Value.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class CustomScriptEventData : ScriptEventData {

public:
    virtual ~CustomScriptEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    CustomScriptEventData(std::string const&);
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void setData(Json::Value const&);
    void setData(std::string const&);
};
