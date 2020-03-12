#pragma once

#include <memory>
#include <string>


namespace ScriptApi {

    class ScriptReportItem {

    public:
        void getErrorHandler()const;
//      void setType(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
        ScriptReportItem();
//      ScriptReportItem(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
        void getType()const;
        ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&);
        ~ScriptReportItem();
        std::string getMessage()const;
//      ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&); //TODO: incomplete function definition
    };
}
