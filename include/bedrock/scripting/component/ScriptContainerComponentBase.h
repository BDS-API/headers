#pragma once

#include "../unmapped/ScriptServerContext"


class ScriptContainerComponentBase : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    virtual ScriptContainerComponentBase::~ScriptContainerComponentBase()

    ScriptContainerComponentBase(void);
};
