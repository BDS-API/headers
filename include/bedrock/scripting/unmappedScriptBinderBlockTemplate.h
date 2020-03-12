#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderBlockTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ScriptBinderBlockTemplate();
    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
};
