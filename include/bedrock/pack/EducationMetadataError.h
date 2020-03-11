#pragma once

#include "./PackError.h"
#include <memory>
#include <vector>
#include "./EducationMetadataError.h"
#include <string>


class EducationMetadataError : PackError {

public:
    virtual ~EducationMetadataError();
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;

    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError();
//  EducationMetadataError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&); //TODO: incomplete function definition
};
