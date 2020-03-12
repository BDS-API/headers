#pragma once

#include "SecureStorage.h"
#include <string>


class NullSecureStorage : SecureStorage {

public:
    ~NullSecureStorage();
    virtual void addOrUpdate(std::string const&, std::string const&);
    virtual void get(std::string const&, std::string &);
    virtual void add(std::string const&, std::string const&);
    virtual void remove(std::string const&);
    NullSecureStorage();
};
