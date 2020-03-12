#pragma once

#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"


class ScriptBinderPureEcsTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    virtual void applyTemplate(ScriptObjectBinder &)const;
    ~ScriptBinderPureEcsTemplate();
//  void build(entt::Registry<unsigned int> &, unsigned int); //TODO: incomplete function definition
    ScriptBinderPureEcsTemplate();
};
