#pragma once

class PackError {

public:
    virtual PackError::~PackError();
    virtual void getLocErrorMessage[abi:cxx11](void)const;

    PackError(PackErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    void getErrorValue(void)const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void getPackErrorType(void)const;
    PackError(PackError const&);
};
