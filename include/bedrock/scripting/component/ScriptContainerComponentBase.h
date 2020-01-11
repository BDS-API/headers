#pragma once

class ScriptContainerComponentBase : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    virtual ScriptContainerComponentBase::~ScriptContainerComponentBase();

    ScriptContainerComponentBase(void);
};
