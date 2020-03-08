#pragma once

#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../ScriptObjectHandle"


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    virtual ScriptBinderBlockTemplate::~ScriptBinderBlockTemplate()
    virtual void getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderBlockTemplate(void);
};
