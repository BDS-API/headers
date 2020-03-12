#pragma once

#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderLevelTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ScriptBinderLevelTemplate();
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
};
