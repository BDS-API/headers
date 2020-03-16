#pragma once

#include <string>
#include "ScriptBinderTemplate.h"


class ScriptBinderEventDataTemplate : public ScriptBinderTemplate {

public:
    virtual ~ScriptBinderEventDataTemplate(); // _ZN29ScriptBinderEventDataTemplateD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string getTemplateIdentifier()const; // _ZNK29ScriptBinderEventDataTemplate21getTemplateIdentifierB5cxx11Ev
    virtual void applyTemplate(ScriptObjectBinder &)const; // _ZNK29ScriptBinderEventDataTemplate13applyTemplateER18ScriptObjectBinder
    void build(std::string const&, ScriptApi::ScriptObjectHandle &&); // _ZN29ScriptBinderEventDataTemplate5buildERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEON9ScriptApi18ScriptObjectHandleE
    ScriptBinderEventDataTemplate(); // _ZN29ScriptBinderEventDataTemplateC2Ev
};
