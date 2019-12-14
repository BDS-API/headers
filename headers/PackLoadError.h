#pragma once

class PackLoadError : PackError {

public:
    virtual ~PackLoadError();

    void PackLoadError(void);
    void PackLoadError(PackParseErrorType, std::vector<std::string, std::allocator<std::string>> const&);
    void PackLoadError(PackLoadError const&);
};
