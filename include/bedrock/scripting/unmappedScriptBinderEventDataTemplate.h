#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderEventDataTemplate : ScriptBinderTemplate {

public:
    ~ScriptBinderEventDataTemplate(); // _ZN29ScriptBinderEventDataTemplateD2Ev
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderEventDataTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderEventDataTemplate13applyTemplateER18ScriptObjectBinder
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&); // _ZN29ScriptBinderEventDataTemplate5buildERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEON9ScriptApi18ScriptObjectHandleE
    ScriptBinderEventDataTemplate(); // _ZN29ScriptBinderEventDataTemplateC2Ev
};
