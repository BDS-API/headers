#pragma once

#include "./SecureStorage.h"
#include <string>


class NullSecureStorage : SecureStorage {

public:
    virtual ~NullSecureStorage();
    virtual void add(std::string const&, std::string const&);
    virtual void addOrUpdate(std::string const&, std::string const&);
    virtual void remove(std::string const&);
    virtual void get(std::string const&, std::string &);

    NullSecureStorage();
};
