#pragma once

#include <string>
#include <vector>


namespace ScriptApi {

    class ScriptFramework {

    public:
        ~ScriptFramework(); // _ZN9ScriptApi15ScriptFrameworkD2Ev
        virtual void initialize(); // _ZN9ScriptApi15ScriptFramework10initializeEv
        virtual void shutdown(); // _ZN9ScriptApi15ScriptFramework8shutdownEv
        ScriptFramework(); // _ZN9ScriptApi15ScriptFrameworkC2Ev
        void runScript(std::string const&, std::string const&); // _ZN9ScriptApi15ScriptFramework9runScriptERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_
        void getScriptReportQueue()const; // _ZNK9ScriptApi15ScriptFramework20getScriptReportQueueEv
        void createObject(ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework12createObjectERNS_18ScriptObjectHandleE
        void createArray(ScriptApi::ScriptObjectHandle &, int); // _ZN9ScriptApi15ScriptFramework11createArrayERNS_18ScriptObjectHandleEi
        void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework11cloneObjectERKNS_18ScriptObjectHandleERS1_
        bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &); // _ZN9ScriptApi15ScriptFramework9hasMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERb
        bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &); // _ZN9ScriptApi15ScriptFramework9hasMemberERKNS_18ScriptObjectHandleERKiRb
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES3_
        void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKiS3_
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
        void setValue(ScriptApi::ScriptObjectHandle &, int); // _ZN9ScriptApi15ScriptFramework8setValueERNS_18ScriptObjectHandleEi
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEl
        void setValue(ScriptApi::ScriptObjectHandle &, long); // _ZN9ScriptApi15ScriptFramework8setValueERNS_18ScriptObjectHandleEl
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEd
        void setValue(ScriptApi::ScriptObjectHandle &, double); // _ZN9ScriptApi15ScriptFramework8setValueERNS_18ScriptObjectHandleEd
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
        void setValue(ScriptApi::ScriptObjectHandle &, bool); // _ZN9ScriptApi15ScriptFramework8setValueERNS_18ScriptObjectHandleEb
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string const&); // _ZN9ScriptApi15ScriptFramework9setMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESB_
        void setValue(ScriptApi::ScriptObjectHandle &, std::string const&); // _ZN9ScriptApi15ScriptFramework8setValueERNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS1_
        void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKiRS1_
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERi
        void getValue(ScriptApi::ScriptObjectHandle const&, int &); // _ZN9ScriptApi15ScriptFramework8getValueERKNS_18ScriptObjectHandleERi
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERl
        void getValue(ScriptApi::ScriptObjectHandle const&, long &); // _ZN9ScriptApi15ScriptFramework8getValueERKNS_18ScriptObjectHandleERl
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERd
        void getValue(ScriptApi::ScriptObjectHandle const&, double &); // _ZN9ScriptApi15ScriptFramework8getValueERKNS_18ScriptObjectHandleERd
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERb
        void getValue(ScriptApi::ScriptObjectHandle const&, bool &); // _ZN9ScriptApi15ScriptFramework8getValueERKNS_18ScriptObjectHandleERb
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string &); // _ZN9ScriptApi15ScriptFramework9getMemberERKNS_18ScriptObjectHandleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS9_
        void getValue(ScriptApi::ScriptObjectHandle const&, std::string &); // _ZN9ScriptApi15ScriptFramework8getValueERKNS_18ScriptObjectHandleERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//      void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &); //TODO: incomplete function definition // _ZN9ScriptApi15ScriptFramework13getHandleTypeERKNS_18ScriptObjectHandleERNS_16ScriptObjectTypeE
        void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &); // _ZN9ScriptApi15ScriptFramework14getArrayLengthERKNS_18ScriptObjectHandleERi
        void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string> &); // _ZN9ScriptApi15ScriptFramework14getMemberNamesERKNS_18ScriptObjectHandleERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISA_EE
        void getGlobalObject(ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework15getGlobalObjectERNS_18ScriptObjectHandleE
        void createUndefined(ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework15createUndefinedERNS_18ScriptObjectHandleE
        void createNull(ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework10createNullERNS_18ScriptObjectHandleE
        void registerGlobalAPI(std::string const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptObjectHandle &); // _ZN9ScriptApi15ScriptFramework17registerGlobalAPIERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERNS_23ScriptCallbackInterfaceERNS_18ScriptObjectHandleE
        void registerConsole(ScriptApi::ScriptCallbackInterface &); // _ZN9ScriptApi15ScriptFramework15registerConsoleERNS_23ScriptCallbackInterfaceE
    };
}
