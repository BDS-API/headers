#pragma once



class ScriptEventListener {

public:
    virtual ScriptEventListener::~ScriptEventListener()
    virtual void onScriptGetComponent(std::string const&, RegistrationType, bool);
    virtual void onScriptListenForEvent(std::string const&);
    virtual void onScriptBroadcastEvent(std::string const&, RegistrationType, bool);
    virtual void onScriptRegisterView();
    virtual void onScriptRegisterSpatialView(std::string const&);
    virtual void onScriptAddFilterToView(std::string const&);
    virtual void onScriptLoaded(std::string const&, unsigned long);
    virtual void onScriptRan(std::string const&, std::string const&, bool);
    virtual void onScriptError(std::string const&, std::string const&);
    virtual void onScriptInternalError(std::string const&);

    ScriptEventListener(void);
};
