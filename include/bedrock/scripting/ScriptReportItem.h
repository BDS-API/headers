#pragma once

#include <memory>
#include <string>


namespace ScriptApi {

class ScriptReportItem {

public:

    ScriptReportItem();
//  ScriptReportItem(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
//  ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&); //TODO: incomplete function definition
//  ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&); //TODO: incomplete function definition
    std::string getMessage()const;
//  void setType(ScriptApi::ScriptReportItemType); //TODO: incomplete function definition
    void getType()const;
    void getErrorHandler()const;
    ~ScriptReportItem();
};

}