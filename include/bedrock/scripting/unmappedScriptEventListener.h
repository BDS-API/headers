#pragma once

#include <string>


class ScriptEventListener {

public:
    virtual void onScriptRegisterView();
    virtual void onScriptRan(std::string const&, std::string const&, bool);
    virtual void onScriptError(std::string const&, std::string const&);
    virtual void onScriptListenForEvent(std::string const&);
//  virtual void onScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    ~ScriptEventListener();
    virtual void onScriptInternalError(std::string const&);
    virtual void onScriptAddFilterToView(std::string const&);
    virtual void onScriptLoaded(std::string const&, unsigned long);
//  virtual void onScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition
    virtual void onScriptRegisterSpatialView(std::string const&);
    ScriptEventListener();
};
