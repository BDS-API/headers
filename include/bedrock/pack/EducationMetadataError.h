#pragma once

#include "PackError.h"
#include <vector>
#include <string>


class EducationMetadataError : PackError {

public:
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;
    ~EducationMetadataError();
//  EducationMetadataError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
    EducationMetadataError();
    EducationMetadataError(EducationMetadataError const&);
};
