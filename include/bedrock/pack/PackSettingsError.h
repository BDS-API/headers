#pragma once

#include "./PackError.h"
#include "./PackSettingsError.h"
#include <memory>
#include <vector>
#include <string>


class PackSettingsError : PackError {

public:
    virtual ~PackSettingsError();
    virtual std::string getLocErrorMessage()const;
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getEventErrorMessageMap()const;

    PackSettingsError(PackSettingsError const&);
    PackSettingsError();
    PackSettingsError(std::vector<std::string, std::allocator<std::string>> const&);
};
