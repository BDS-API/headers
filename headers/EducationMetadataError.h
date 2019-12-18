#pragma once

class EducationMetadataError : PackError {

public:
    virtual ~EducationMetadataError();
    virtual void getLocErrorMessageMap[abi:cxx11](void)const;
    virtual void getEventErrorMessageMap[abi:cxx11](void)const;

    void EducationMetadataError(EducationMetadataError const&);
    void EducationMetadataError(void);
    void EducationMetadataError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
