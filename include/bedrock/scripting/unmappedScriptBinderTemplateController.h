#pragma once

#include "ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "ScriptObjectBinder.h"


class ScriptBinderTemplateController {

public:
    void _initialize();
    ScriptBinderTemplateController();
    ~ScriptBinderTemplateController();
    void serialize(ScriptEngine &, ScriptObjectBinder const&, ScriptApi::ScriptObjectHandle &);
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
};
