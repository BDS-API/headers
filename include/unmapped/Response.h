#pragma once

#include "./MCRESULT.h"
#include "../json/Value.h"
#include <string>


namespace Automation {

class Response {

public:

    ~Response();
//  Response(Automation::Response::Type, std::string &&, std::string const&); //TODO: incomplete function definition
    std::string toString()const;
    void requestError(std::string const&, MCRESULT const&, std::string);
    void slashCommand(std::string const&, Json::Value const&);
    void slashCommandInitiated(std::string const&);
    void createEvent(std::string const&, Json::Value const&, Json::Value const&);
    std::string getRequestId()const;
    std::string getEventName()const;
    void getType()const;
};

}