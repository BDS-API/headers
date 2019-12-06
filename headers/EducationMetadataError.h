#pragma once

class EducationMetadataError : PackError {

public:
    virtual ~EducationMetadataError();

    void EducationMetadataError(EducationMetadataError const&);
    void EducationMetadataError(void);
    void EducationMetadataError(PackParseErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
