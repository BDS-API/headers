#pragma once

#include <string>
#include "ScriptLanguageInterface.h"
#include <vector>


namespace ScriptApi {

    class EmptyScriptInterface : ScriptApi::ScriptLanguageInterface {

    public:
        ~EmptyScriptInterface(); // _ZN9ScriptApi20EmptyScriptInterfaceD2Ev
        virtual void initialize(); // _ZN9ScriptApi20EmptyScriptInterface10initializeEv
        virtual void shutdown(); // _ZN9ScriptApi20EmptyScriptInterface8shutdownEv
        virtual void initialized()const; // _ZNK9ScriptApi20EmptyScriptInterface11initializedEv
        virtual void runScript(std::string const&, std::string const&, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9runScriptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_RNS_12ScriptReportE
        virtual void createObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface12createObjectERNS_18ScriptObjectHandleERNS_12ScriptReportE
        virtual void createArray(ScriptApi::ScriptObjectHandle &, int const&, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface11createArrayERNS_18ScriptObjectHandleERKiRNS_12ScriptReportE
        virtual void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface11cloneObjectERKNS_18ScriptObjectHandleERS1_RNS_12ScriptReportE
        virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9hasMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERbRNS_12ScriptReportE
        virtual bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9hasMemberERKNS_18ScriptObjectHandleERKiRbRNS_12ScriptReportE
        virtual void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES3_RNS_12ScriptReportE
        virtual void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9setMemberERKNS_18ScriptObjectHandleERKiS3_RNS_12ScriptReportE
        virtual void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS1_RNS_12ScriptReportE
        virtual void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface9getMemberERKNS_18ScriptObjectHandleERKiRS1_RNS_12ScriptReportE
        virtual void setValue(ScriptApi::ScriptObjectHandle &, int, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8setValueERNS_18ScriptObjectHandleEiRNS_12ScriptReportE
        virtual void setValue(ScriptApi::ScriptObjectHandle &, double, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8setValueERNS_18ScriptObjectHandleEdRNS_12ScriptReportE
        virtual void setValue(ScriptApi::ScriptObjectHandle &, std::string const&, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8setValueERNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS_12ScriptReportE
        virtual void setValue(ScriptApi::ScriptObjectHandle &, bool, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8setValueERNS_18ScriptObjectHandleEbRNS_12ScriptReportE
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8getValueERKNS_18ScriptObjectHandleERiRNS_12ScriptReportE
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, double &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8getValueERKNS_18ScriptObjectHandleERdRNS_12ScriptReportE
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, std::string &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8getValueERKNS_18ScriptObjectHandleERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS_12ScriptReportE
        virtual void getValue(ScriptApi::ScriptObjectHandle const&, bool &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface8getValueERKNS_18ScriptObjectHandleERbRNS_12ScriptReportE
        virtual void callObjectFunction(ScriptApi::ScriptObjectHandle const&, std::string const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface18callObjectFunctionERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS1_SaIS1_EERS1_RNS_12ScriptReportE
        virtual void callGlobalFunction(ScriptApi::ScriptObjectHandle const&, std::vector<ScriptApi::ScriptObjectHandle> const&, ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface18callGlobalFunctionERKNS_18ScriptObjectHandleERKSt6vectorIS1_SaIS1_EERS1_RNS_12ScriptReportE
//      virtual void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &, ScriptApi::ScriptReport &); //TODO: incomplete function definition // _ZN9ScriptApi20EmptyScriptInterface13getHandleTypeERKNS_18ScriptObjectHandleERNS_16ScriptObjectTypeERNS_12ScriptReportE
        virtual void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string> &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface14getMemberNamesERKNS_18ScriptObjectHandleERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISA_EERNS_12ScriptReportE
        virtual void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface14getArrayLengthERKNS_18ScriptObjectHandleERiRNS_12ScriptReportE
        virtual void getGlobalObject(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface15getGlobalObjectERNS_18ScriptObjectHandleERNS_12ScriptReportE
        virtual void createUndefined(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface15createUndefinedERNS_18ScriptObjectHandleERNS_12ScriptReportE
        virtual void createNull(ScriptApi::ScriptObjectHandle &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface10createNullERNS_18ScriptObjectHandleERNS_12ScriptReportE
        virtual void defineGlobalCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface21defineGlobalCallbacksERKNS_18ScriptObjectHandleERNS_23ScriptCallbackInterfaceERNS_12ScriptReportE
        virtual void defineConsoleCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface22defineConsoleCallbacksERKNS_18ScriptObjectHandleERNS_23ScriptCallbackInterfaceERNS_12ScriptReportE
        virtual void defineSystemSharedCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface27defineSystemSharedCallbacksERKNS_18ScriptObjectHandleERNS_23ScriptCallbackInterfaceERNS_12ScriptReportE
        virtual void defineSystemServerCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface27defineSystemServerCallbacksERKNS_18ScriptObjectHandleERNS_23ScriptCallbackInterfaceERNS_12ScriptReportE
        virtual void defineSystemClientCallbacks(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptReport &); // _ZN9ScriptApi20EmptyScriptInterface27defineSystemClientCallbacksERKNS_18ScriptObjectHandleERNS_23ScriptCallbackInterfaceERNS_12ScriptReportE
        EmptyScriptInterface(); // _ZN9ScriptApi20EmptyScriptInterfaceC2Ev
    };
}
