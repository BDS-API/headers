#pragma once

#include "../../../../json/Value"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class CustomScriptEventData : ScriptEventData {

public:
    CustomScriptEventData::~CustomScriptEventData()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    CustomScriptEventData(std::string const&);
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void setData(Json::Value const&);
    void setData(std::string const&);
};
