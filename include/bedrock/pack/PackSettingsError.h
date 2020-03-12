#pragma once

#include "PackError.h"
#include <vector>
#include <string>


class PackSettingsError : PackError {

public:
    virtual std::string getLocErrorMessageMap()const;
    virtual std::string getLocErrorMessage()const;
    virtual std::string getEventErrorMessageMap()const;
    ~PackSettingsError();
    PackSettingsError(PackSettingsError const&);
    PackSettingsError();
    PackSettingsError(std::vector<std::string> const&);
};
