#pragma once

#include "../../../unmapped/Block.h"
#include "../ScriptObjectHandle.h"
#include "ScriptBinderTemplate.h"
#include "../../util/BlockPos.h"
#include "ScriptObjectBinder.h"


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderBlockTemplate();
    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderBlockTemplate();
};
