#pragma once

#include <string>
#include <memory>


namespace ScriptApi {

    class ScriptReport {

    public:
        ScriptReport(); // _ZN9ScriptApi12ScriptReportC2Ev
        void merge(ScriptApi::ScriptReport &&); // _ZN9ScriptApi12ScriptReport5mergeEOS0_
        void clear(); // _ZN9ScriptApi12ScriptReport5clearEv
        void addError(); // _ZN9ScriptApi12ScriptReport8addErrorEv
        void addError(std::string const&); // _ZN9ScriptApi12ScriptReport8addErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&); // _ZN9ScriptApi12ScriptReport8addErrorEOSt10unique_ptrINS_22JavaScriptErrorHandlerESt14default_deleteIS2_EE
        void addWarning(); // _ZN9ScriptApi12ScriptReport10addWarningEv
        void addWarning(std::string const&); // _ZN9ScriptApi12ScriptReport10addWarningERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        bool hasErrors()const; // _ZNK9ScriptApi12ScriptReport9hasErrorsEv
        bool hasWarnings()const; // _ZNK9ScriptApi12ScriptReport11hasWarningsEv
        void getReportItems()const; // _ZNK9ScriptApi12ScriptReport14getReportItemsEv
        ~ScriptReport(); // _ZN9ScriptApi12ScriptReportD2Ev
    };
}
