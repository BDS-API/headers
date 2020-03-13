#pragma once



class ScriptBinderTemplateController {

public:
    ScriptBinderTemplateController(); // _ZN30ScriptBinderTemplateControllerC2Ev
    void _initialize(); // _ZN30ScriptBinderTemplateController11_initializeEv
    ~ScriptBinderTemplateController(); // _ZN30ScriptBinderTemplateControllerD2Ev
    void serialize(ScriptEngine &, ScriptObjectBinder const&, ScriptApi::ScriptObjectHandle &); // _ZN30ScriptBinderTemplateController9serializeER12ScriptEngineRK18ScriptObjectBinderRN9ScriptApi18ScriptObjectHandleE
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const; // _ZNK30ScriptBinderTemplateController11deserializeER12ScriptEngineRKN9ScriptApi18ScriptObjectHandleE
};
