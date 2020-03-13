#pragma once

#include <string>
#include <memory>


namespace ScriptApi {

    class ScriptReportItem {

    public:
        ScriptReportItem(); // _ZN9ScriptApi16ScriptReportItemC2Ev
//      ScriptReportItem(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition // _ZN9ScriptApi16ScriptReportItemC2ENS_20ScriptReportItemTypeE
//      ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&); //TODO: incomplete function definition // _ZN9ScriptApi16ScriptReportItemC2ENS_20ScriptReportItemTypeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&); // _ZN9ScriptApi16ScriptReportItemC2EOSt10unique_ptrINS_22JavaScriptErrorHandlerESt14default_deleteIS2_EE
        std::string getMessage()const; // _ZNK9ScriptApi16ScriptReportItem10getMessageB5cxx11Ev
//      void setType(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition // _ZN9ScriptApi16ScriptReportItem7setTypeENS_20ScriptReportItemTypeE
        void getType()const; // _ZNK9ScriptApi16ScriptReportItem7getTypeEv
        void getErrorHandler()const; // _ZNK9ScriptApi16ScriptReportItem15getErrorHandlerEv
        ~ScriptReportItem(); // _ZN9ScriptApi16ScriptReportItemD2Ev
    };
}
