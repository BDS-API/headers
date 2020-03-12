#pragma once

#include "MCRESULT.h"
#include <string>
#include "../json/Value.h"


namespace Automation {

    class Response {

    public:
        void requestError(std::string const&, MCRESULT const&, std::string);
        void createEvent(std::string const&, Json::Value const&, Json::Value const&);
        std::string toString()const;
        void getType()const;
        std::string getRequestId()const;
        ~Response();
//      Response(Automation::Response::Type, std::string &&, std::string const&); //TODO: incomplete function definition
        void slashCommandInitiated(std::string const&);
        void slashCommand(std::string const&, Json::Value const&);
        std::string getEventName()const;
    };
}
