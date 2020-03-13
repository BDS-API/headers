#pragma once

#include <string>


namespace Automation {

    class Response {

    public:
        ~Response(); // _ZN10Automation8ResponseD2Ev
//      Response(Automation::Response::Type, std::string &&, std::string const&); //TODO: incomplete function definition // _ZN10Automation8ResponseC2ENS0_4TypeEONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS7_
        std::string toString()const; // _ZNK10Automation8Response8toStringB5cxx11Ev
        void requestError(std::string const&, MCRESULT const&, std::string); // _ZN10Automation8Response12requestErrorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8MCRESULTS6_
        void slashCommand(std::string const&, Json::Value const&); // _ZN10Automation8Response12slashCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
        void slashCommandInitiated(std::string const&); // _ZN10Automation8Response21slashCommandInitiatedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void createEvent(std::string const&, Json::Value const&, Json::Value const&); // _ZN10Automation8Response11createEventERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueESC_
        std::string getRequestId()const; // _ZNK10Automation8Response12getRequestIdB5cxx11Ev
        std::string getEventName()const; // _ZNK10Automation8Response12getEventNameB5cxx11Ev
        void getType()const; // _ZNK10Automation8Response7getTypeEv
    };
}
