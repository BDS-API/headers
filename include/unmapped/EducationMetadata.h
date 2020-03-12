#pragma once

#include <string>


class EducationMetadata {

public:
    static std::string STRING_TO_CONTENT_TYPE;
    static std::string STRING_TO_USER_TYPE;

    EducationMetadata(EducationMetadata const&);
    EducationMetadata();
    ~EducationMetadata();
};
