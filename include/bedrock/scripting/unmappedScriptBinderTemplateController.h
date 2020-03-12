#pragma once



class ScriptBinderTemplateController {

public:
    ScriptBinderTemplateController();
    ~ScriptBinderTemplateController();
    void serialize(ScriptEngine &, ScriptObjectBinder const&, ScriptApi::ScriptObjectHandle &);
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _initialize();
};
