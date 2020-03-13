#pragma once

#include <vector>


namespace JsonValidator {

    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::string> *); // _ZN13JsonValidator8validateERKNS_8PropertyERKN4Json5ValueEPSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISD_EE
    void generateDocs(JsonValidator::Property const&); // _ZN13JsonValidator12generateDocsERKNS_8PropertyE
};
