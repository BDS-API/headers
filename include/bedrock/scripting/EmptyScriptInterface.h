#pragma once

#include <string>
#include <vector>
#include "ScriptLanguageInterface.h"


namespace ScriptApi {

    class EmptyScriptInterface : ScriptApi::ScriptLanguageInterface {

    public:
        ~EmptyScriptInterface();
        virtual void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
        virtual void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, double &, ScriptApi::ScriptReport &);
        virtual void callObjectFunction(ScriptApi::ScriptObjectHandle const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &, ScriptApi::ScriptReport &);
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, std::string &, ScriptApi::ScriptReport &);
        virtual void callGlobalFunction(ScriptApi::ScriptObjectHandle const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &);
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
        virtual void createNull(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void runScript(std::string const&, std::string const&, ScriptApi::ScriptReport &);
        virtual void setValue(ScriptApi::ScriptObjectHandle &, std::string const&, ScriptApi::ScriptReport &);
        virtual void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string> &, ScriptApi::ScriptReport &);
        virtual void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &);
        virtual void defineSystemSharedCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
        virtual void setValue(ScriptApi::ScriptObjectHandle &, bool, ScriptApi::ScriptReport &);
        virtual void createArray(ScriptApi::ScriptObjectHandle &, int const&, ScriptApi::ScriptReport &);
        virtual void defineConsoleCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
        virtual void defineSystemServerCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
        virtual void getGlobalObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void initialize();
//      virtual void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &, ScriptApi::ScriptReport &); //TODO: incomplete function definition
        virtual void setValue(ScriptApi::ScriptObjectHandle &, double, ScriptApi::ScriptReport &);
        virtual void initialized()const;
        virtual void setValue(ScriptApi::ScriptObjectHandle &, int, ScriptApi::ScriptReport &);
        virtual void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &, ScriptApi::ScriptReport &);
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, bool &, ScriptApi::ScriptReport &);
        virtual void defineGlobalCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
        virtual void createObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        virtual void shutdown();
        virtual void defineSystemClientCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &);
        virtual void createUndefined(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &);
        EmptyScriptInterface();
    };
}
