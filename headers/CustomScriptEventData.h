#pragma once

class CustomScriptEventData : ScriptEventData {

public:
    virtual ~CustomScriptEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void CustomScriptEventData(std::string const&);
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void setData(Json::Value const&);
    void setData(std::string const&);
};
