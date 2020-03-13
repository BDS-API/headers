#pragma once

#include <string>


class ScriptEventListener {

public:
    ~ScriptEventListener(); // _ZN19ScriptEventListenerD2Ev
//  virtual void onScriptGetComponent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition // _ZN19ScriptEventListener20onScriptGetComponentERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE16RegistrationTypeb
    virtual void onScriptListenForEvent(std::string const&); // _ZN19ScriptEventListener22onScriptListenForEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  virtual void onScriptBroadcastEvent(std::string const&, RegistrationType, bool); //TODO: incomplete function definition // _ZN19ScriptEventListener22onScriptBroadcastEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE16RegistrationTypeb
    virtual void onScriptRegisterView(); // _ZN19ScriptEventListener20onScriptRegisterViewEv
    virtual void onScriptRegisterSpatialView(std::string const&); // _ZN19ScriptEventListener27onScriptRegisterSpatialViewERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onScriptAddFilterToView(std::string const&); // _ZN19ScriptEventListener23onScriptAddFilterToViewERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void onScriptLoaded(std::string const&, unsigned long); // _ZN19ScriptEventListener14onScriptLoadedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEm
    virtual void onScriptRan(std::string const&, std::string const&, bool); // _ZN19ScriptEventListener11onScriptRanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_b
    virtual void onScriptError(std::string const&, std::string const&); // _ZN19ScriptEventListener13onScriptErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    virtual void onScriptInternalError(std::string const&); // _ZN19ScriptEventListener21onScriptInternalErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    ScriptEventListener(); // _ZN19ScriptEventListenerC2Ev
};
