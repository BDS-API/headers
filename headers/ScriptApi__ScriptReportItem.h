#pragma once

class ScriptApi::ScriptReportItem {

public:

    void ScriptReportItem(void);
    void ScriptReportItem(ScriptApi::ScriptReportItemType);
    void ScriptReportItem(ScriptApi::ScriptReportItemType, std::string const&);
    void ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void setType(ScriptApi::ScriptReportItemType);
    void getType(void)const;
    void getErrorHandler(void)const;
};
