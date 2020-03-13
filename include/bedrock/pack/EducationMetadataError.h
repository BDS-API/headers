#pragma once

#include <string>
#include "PackError.h"
#include <vector>


class EducationMetadataError : PackError {

public:
    ~EducationMetadataError(); // _ZN22EducationMetadataErrorD2Ev
    virtual std::string getLocErrorMessageMap()const; // _ZNK22EducationMetadataError21getLocErrorMessageMapB5cxx11Ev
    virtual std::string getEventErrorMessageMap()const; // _ZNK22EducationMetadataError23getEventErrorMessageMapB5cxx11Ev
    EducationMetadataError(EducationMetadataError const&); // _ZN22EducationMetadataErrorC2ERKS_
    EducationMetadataError(); // _ZN22EducationMetadataErrorC2Ev
//  EducationMetadataError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition // _ZN22EducationMetadataErrorC2E18PackParseErrorTypeRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS7_EE
};
