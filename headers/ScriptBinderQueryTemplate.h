#pragma once

class ScriptBinderQueryTemplate : ScriptBinderTemplate {

public:
    virtual ~ScriptBinderQueryTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;

    void build(unsigned int);
    void ScriptBinderQueryTemplate(void);
};
