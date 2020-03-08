#pragma once



class ScriptBinderTemplateController {

public:

    ScriptBinderTemplateController(void);
    void _initialize(void);
    void serialize(ScriptEngine &, ScriptObjectBinder const&, ScriptApi::ScriptObjectHandle &);
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
};
