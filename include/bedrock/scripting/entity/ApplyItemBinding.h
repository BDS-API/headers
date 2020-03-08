#pragma once

#include "../../actor/Actor"
#include "../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"


class ApplyItemBinding : ScriptTemplateFactory<ScriptServerContext>::Entity {

public:
    virtual ApplyItemBinding::~ApplyItemBinding()
    virtual void createAndApplyTemplate(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor **, std::string const&)const;

    ApplyItemBinding(void);
};
