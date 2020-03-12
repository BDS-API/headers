#pragma once

#include <vector>
#include <string>
#include "PackError.h"


class EducationMetadataError : PackError {

public:
    virtual std::string getEventErrorMessageMap()const;
    ~EducationMetadataError();
    virtual std::string getLocErrorMessageMap()const;
    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError();
//  EducationMetadataError(PackParseErrorType, std::vector<std::string> const&); //TODO: incomplete function definition
};
