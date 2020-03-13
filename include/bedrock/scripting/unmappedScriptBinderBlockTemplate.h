#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderBlockTemplate(); // _ZN25ScriptBinderBlockTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK25ScriptBinderBlockTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK25ScriptBinderBlockTemplate13applyTemplateER18ScriptObjectBinder
    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&); // _ZN25ScriptBinderBlockTemplate5buildERK5BlockRK8BlockPosON9ScriptApi18ScriptObjectHandleE
    ScriptBinderBlockTemplate(); // _ZN25ScriptBinderBlockTemplateC2Ev
};
