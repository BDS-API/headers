#pragma once



using namespace ScriptApi;

class EmptyScriptInterface : ScriptApi::ScriptLanguageInterface {

public:
    virtual ScriptApi::EmptyScriptInterface::~EmptyScriptInterface()
    virtual void initialize();
    virtual void shutdown();
    virtual void initialized()const;
    virtual void runScript(std::string const&, std::string const&, ScriptApi::ScriptReport &);
    virtual void createObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createArray(ScriptApi::ScriptObjectHandle &, int const&, ScriptApi::ScriptReport &);
    virtual void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &, ScriptApi::ScriptReport &);
    virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &, ScriptApi::ScriptReport &);
    virtual void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
    virtual void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
    virtual void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, int, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, double, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, std::string const&, ScriptApi::ScriptReport &);
    virtual void setValue(ScriptApi::ScriptObjectHandle &, bool, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, double &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, std::string &, ScriptApi::ScriptReport &);
    virtual void getValue(ScriptApi::ScriptObjectHandle const&, bool &, ScriptApi::ScriptReport &);
    virtual void callObjectFunction(ScriptApi::ScriptObjectHandle const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void callGlobalFunction(ScriptApi::ScriptObjectHandle const&, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> const&, ScriptApi::ScriptObjectHandle&, ScriptApi::ScriptReport &);
    virtual void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &, ScriptApi::ScriptReport &);
    virtual void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string, std::allocator<std::string>> &, ScriptApi::ScriptReport &);
    virtual void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
    virtual void getGlobalObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createUndefined(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void createNull(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
    virtual void defineGlobalCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineConsoleCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemSharedCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemServerCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
    virtual void defineSystemClientCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);

    EmptyScriptInterface(void);
};
