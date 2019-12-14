#pragma once

class EducationMetadataError : PackError {

public:
    virtual ~EducationMetadataError();

    void EducationMetadataError(EducationMetadataError const&);
    void EducationMetadataError(void);
    void EducationMetadataError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
