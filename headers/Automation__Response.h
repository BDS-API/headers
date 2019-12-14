#pragma once

class Automation::Response {

public:

    void Response(Automation::Response::Type, std::string &&, std::string const&);
    void requestError(std::string const&, MCRESULT const&, std::string);
    void slashCommand(std::string const&, Json::Value const&);
    void slashCommandInitiated(std::string const&);
    void createEvent(std::string const&, Json::Value const&, Json::Value const&);
    void getType(void)const;
};
