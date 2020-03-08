#pragma once



using namespace ScriptApi;

class ScriptReportItem {

public:

    ScriptReportItem(void);
    ScriptReportItem(ScriptApi::ScriptReportItemType);
    ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&);
    ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void setType(ScriptApi::ScriptReportItemType);
    void getType()const;
    void getErrorHandler()const;
};
