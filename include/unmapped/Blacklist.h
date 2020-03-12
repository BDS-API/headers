#pragma once

#include <string>
#include <vector>


class Blacklist {

public:
    class Entry;

    void getDuration(Blacklist::Entry const&)const;
    void clear();
    void addEntry(Blacklist::Entry const&);
    void removeEntry(Blacklist::Entry const&);
    void setEntries(std::vector<Blacklist::Entry> const&);
    std::string getMessage(Blacklist::Entry const&)const;
//  bool isXUIDBlocked(std::string const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    Blacklist();
    ~Blacklist();
//  bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    bool isBlocked(Blacklist::Entry const&)const;
//  bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition
    class Entry {

    public:
        ~Entry();
        Entry(mce::UUID const&, std::string const&);
        Entry(Blacklist::Entry const&);
//      Entry(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&); //TODO: incomplete function definition
        Entry(Blacklist::Entry &&);
    };
};
