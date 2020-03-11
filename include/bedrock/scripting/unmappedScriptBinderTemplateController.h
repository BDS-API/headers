#pragma once

#include "../ScriptObjectHandle.h"
#include "./ScriptEngine.h"
#include "./ScriptObjectBinder.h"


class ScriptBinderTemplateController {

public:

    ScriptBinderTemplateController();
    void _initialize();
    ~ScriptBinderTemplateController();
    void serialize(ScriptEngine &, ScriptObjectBinder const&, ScriptApi::ScriptObjectHandle &);
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
};
