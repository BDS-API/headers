#pragma once

class EducationMetadataError : PackError {

public:
    virtual EducationMetadataError::~EducationMetadataError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError(void);
    EducationMetadataError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
