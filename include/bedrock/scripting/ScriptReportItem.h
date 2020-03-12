#pragma once

#include <string>
#include <memory>


namespace ScriptApi {

    class ScriptReportItem {

    public:
        ~ScriptReportItem();
        ScriptReportItem();
//      ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&); //TODO: incomplete function definition
//      void setType(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
        void getErrorHandler()const;
        void getType()const;
//      ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&); //TODO: incomplete function definition
//      ScriptReportItem(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
        std::string getMessage()const;
    };
}
