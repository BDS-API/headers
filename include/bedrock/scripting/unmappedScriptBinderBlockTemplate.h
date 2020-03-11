#pragma once

#include "../../../unmapped/Block.h"
#include "./ScriptBinderTemplate.h"
#include "../../util/BlockPos.h"
#include "../ScriptObjectHandle.h"
#include "./ScriptObjectBinder.h"
#include <string>


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderBlockTemplate();
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
    ScriptBinderBlockTemplate();
};
