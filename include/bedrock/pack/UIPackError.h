#pragma once



class UIPackError : PackError {

public:
    virtual UIPackError::~UIPackError()
    virtual void getLocErrorMessageMap()const;
    virtual void getEventErrorMessageMap()const;

    UIPackError(void);
    UIPackError(UIPackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
};
