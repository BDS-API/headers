#pragma once

#include "../mce/UUID.h"
#include <vector>
#include <string>


class Blacklist {

public:
    class Entry;

    bool isBlocked(Blacklist::Entry const&)const;
//  bool isXUIDBlocked(std::string const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    std::string getMessage(Blacklist::Entry const&)const;
    void addEntry(Blacklist::Entry const&);
//  bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    void getDuration(Blacklist::Entry const&)const;
//  bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    Blacklist();
    ~Blacklist();
    void clear();
    void removeEntry(Blacklist::Entry const&);
    void setEntries(std::vector<Blacklist::Entry> const&);
    class Entry {

    public:
        Entry(mce::UUID const&, std::string const&);
        Entry(Blacklist::Entry &&);
//      Entry(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&); //TODO: incomplete function definition
        Entry(Blacklist::Entry const&);
        ~Entry();
    };
};
