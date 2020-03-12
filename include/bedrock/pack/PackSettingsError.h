#pragma once

#include <vector>
#include <string>
#include "PackError.h"


class PackSettingsError : PackError {

public:
    virtual std::string getLocErrorMessage()const;
    ~PackSettingsError();
    virtual std::string getEventErrorMessageMap()const;
    virtual std::string getLocErrorMessageMap()const;
    PackSettingsError(PackSettingsError const&);
    PackSettingsError();
    PackSettingsError(std::vector<std::string> const&);
};
