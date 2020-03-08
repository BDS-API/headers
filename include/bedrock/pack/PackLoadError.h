#pragma once



class PackLoadError : PackError {

public:
    virtual PackLoadError::~PackLoadError()
    virtual void getLocErrorMessageMap()const;
    virtual void getEventErrorMessageMap()const;

    PackLoadError(void);
    PackLoadError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    PackLoadError(PackLoadError const&);
};
