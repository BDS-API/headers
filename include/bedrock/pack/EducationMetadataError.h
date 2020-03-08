#pragma once



class EducationMetadataError : PackError {

public:
    virtual EducationMetadataError::~EducationMetadataError()
    virtual void getLocErrorMessageMap()const;
    virtual void getEventErrorMessageMap()const;

    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError(void);
    EducationMetadataError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
