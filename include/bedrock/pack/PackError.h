#pragma once

#include <string>
#include <vector>


class PackError {

public:
    ~PackError(); // _ZN9PackErrorD2Ev
    virtual std::string getLocErrorMessage()const; // _ZNK9PackError18getLocErrorMessageB5cxx11Ev
//  PackError(PackErrorType, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN9PackErrorC2E13PackErrorTypeRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS7_EE
    void getErrorValue()const; // _ZNK9PackError13getErrorValueEv
    std::string getErrorParameters()const; // _ZNK9PackError18getErrorParametersB5cxx11Ev
    std::string getEventErrorMessage()const; // _ZNK9PackError20getEventErrorMessageB5cxx11Ev
    void serialize(Json::Value &); // _ZN9PackError9serializeERN4Json5ValueE
    void deserialize(Json::Value const&); // _ZN9PackError11deserializeERKN4Json5ValueE
    void getPackErrorType()const; // _ZNK9PackError16getPackErrorTypeEv
    PackError(PackError const&); // _ZN9PackErrorC2ERKS_
};
