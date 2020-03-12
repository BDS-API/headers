#pragma once

#include "ScriptObjectBinder.h"
#include "ScriptBinderTemplate.h"
#include "../../item/ItemInstance.h"


class ScriptBinderItemStackTemplate : ScriptBinderTemplate {

public:
    virtual std::string getTemplateIdentifier()const;
    ~ScriptBinderItemStackTemplate();
    virtual void applyTemplate(ScriptObjectBinder &)const;
//  void build(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
    ScriptBinderItemStackTemplate();
};
