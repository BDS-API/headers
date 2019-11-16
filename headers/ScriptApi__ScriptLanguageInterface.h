#pragma once

class ScriptApi::ScriptLanguageInterface {

    virtual ~ScriptLanguageInterface();
    virtual ~ScriptLanguageInterface();
    virtual void initialize(void);
    virtual void shutdown(void);
    virtual void initialized(void)const;
    virtual void runScript(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptReport &);
    virtual void createObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createArray(ScriptApi::ScriptObjectHandle &, int const&, ScriptApi::ScriptReport &);
    virtual void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void hasMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool &, ScriptApi::ScriptReport &);
    virtual void hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &, ScriptApi::ScriptReport &);
    virtual void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
    virtual void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
    virtual void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, int, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, double, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, bool, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, double &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, bool &, ScriptApi::ScriptReport &);
    virtual void callObjectFunction(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void callGlobalFunction(ScriptApi::ScriptObjectHandle const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &, ScriptApi::ScriptReport &);
    virtual void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, ScriptApi::ScriptReport &);
    virtual void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
    virtual void getGlobalObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createUndefined(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createNull(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void defineGlobalCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineConsoleCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemSharedCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemServerCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemClientCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
}
