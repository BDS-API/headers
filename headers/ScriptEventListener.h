#pragma once

class ScriptEventListener {

    virtual void ScriptEventListener::~ScriptEventListener();
    virtual void ScriptEventListener::~ScriptEventListener();
    virtual void onScriptGetComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, RegistrationType, bool);
    virtual void onScriptListenForEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onScriptBroadcastEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, RegistrationType, bool);
    virtual void onScriptRegisterView(void);
    virtual void onScriptRegisterSpatialView(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onScriptAddFilterToView(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onScriptLoaded(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    virtual void onScriptRan(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onScriptError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onScriptInternalError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
