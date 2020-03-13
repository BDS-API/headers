#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderComponentTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderComponentTemplate(); // _ZN29ScriptBinderComponentTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderComponentTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderComponentTemplate13applyTemplateER18ScriptObjectBinder
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&); // _ZN29ScriptBinderComponentTemplate5buildERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEON9ScriptApi18ScriptObjectHandleE
    ScriptBinderComponentTemplate(); // _ZN29ScriptBinderComponentTemplateC2Ev
};
