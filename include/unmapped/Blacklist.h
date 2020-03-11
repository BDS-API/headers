#pragma once

#include "../mce/UUID.h"
#include "./Entry.h"
#include <memory>
#include <vector>
#include <string>


class Blacklist {

public:

    Blacklist();
    ~Blacklist();
    bool isBlocked(Blacklist::Entry const&)const;
//  bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const; //TODO: incomplete function definition
    std::string getMessage(Blacklist::Entry const&)const;
    void getDuration(Blacklist::Entry const&)const;
    void clear();
    void setEntries(std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>> const&);
    void addEntry(Blacklist::Entry const&);
    void removeEntry(Blacklist::Entry const&);
//  bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const; //TODO: incomplete function definition
//  bool isXUIDBlocked(std::string const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const; //TODO: incomplete function definition
};
