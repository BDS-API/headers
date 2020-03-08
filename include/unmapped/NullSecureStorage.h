#pragma once



class NullSecureStorage : SecureStorage {

public:
    virtual NullSecureStorage::~NullSecureStorage()
    virtual void add(std::string const&, std::string const&);
    virtual void addOrUpdate(std::string const&, std::string const&);
    virtual void remove(std::string const&);
    virtual void get(std::string const&, std::string&);

    NullSecureStorage(void);
};
