#pragma once

#include <string>


namespace Automation {

    class Response {

    public:
        ~Response();
//      Response(Automation::Response::Type, std::string &&, std::string const&); //TODO: incomplete function definition
        void slashCommandInitiated(std::string const&);
        void createEvent(std::string const&, Json::Value const&, Json::Value const&);
        void slashCommand(std::string const&, Json::Value const&);
        std::string getEventName()const;
        void requestError(std::string const&, MCRESULT const&, std::string);
        std::string toString()const;
        std::string getRequestId()const;
        void getType()const;
    };
}
