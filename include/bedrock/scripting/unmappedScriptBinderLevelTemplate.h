#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderLevelTemplate : ScriptBinderTemplate {

public:
    virtual void applyTemplate(ScriptObjectBinder &)const;
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderLevelTemplate();
    ScriptBinderLevelTemplate();
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
};
