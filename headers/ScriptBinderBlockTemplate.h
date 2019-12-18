#pragma once

class ScriptBinderBlockTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderBlockTemplate();
    virtual void getTemplateIdentifier[abi:cxx11](void)const;
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(Block const&, BlockPos const&, ScriptApi::ScriptObjectHandle &&);
    void ScriptBinderBlockTemplate(void);
};
