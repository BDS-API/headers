#pragma once

class ScriptApi::ScriptFramework {

public:
    virtual ~ScriptFramework();
    virtual void initialize(void);
    virtual void shutdown(void);

    void ScriptFramework(void);
    void runScript(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getScriptReportQueue(void)const;
    void createObject(ScriptApi::ScriptObjectHandle &);
    void createArray(ScriptApi::ScriptObjectHandle &, int);
    void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle&);
    bool hasMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool &);
    bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle const&);
    void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void setValue(ScriptApi::ScriptObjectHandle &, int);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, long);
    void setValue(ScriptApi::ScriptObjectHandle &, long);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, double);
    void setValue(ScriptApi::ScriptObjectHandle &, double);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void setValue(ScriptApi::ScriptObjectHandle &, bool);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setValue(ScriptApi::ScriptObjectHandle &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptObjectHandle&);
    void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle&);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int &);
    void getValue(ScriptApi::ScriptObjectHandle const&, int &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, long &);
    void getValue(ScriptApi::ScriptObjectHandle const&, long &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, double &);
    void getValue(ScriptApi::ScriptObjectHandle const&, double &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool &);
    void getValue(ScriptApi::ScriptObjectHandle const&, bool &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>&);
    void getValue(ScriptApi::ScriptObjectHandle const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &);
    void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &);
    void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    void getGlobalObject(ScriptApi::ScriptObjectHandle &);
    void createUndefined(ScriptApi::ScriptObjectHandle &);
    void createNull(ScriptApi::ScriptObjectHandle &);
    void registerGlobalAPI(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptObjectHandle &);
    void registerConsole(ScriptApi::ScriptCallbackInterface &);
};
