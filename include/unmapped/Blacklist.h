#pragma once

#include "../mce/UUID"


class Blacklist {

public:

    Blacklist(void);
    bool isBlocked(Blacklist::Entry const&)const;
    bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
    void getDuration(Blacklist::Entry const&)const;
    void clear();
    void setEntries(std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>> const&);
    void addEntry(Blacklist::Entry const&);
    void removeEntry(Blacklist::Entry const&);
    bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
    bool isXUIDBlocked(std::string const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
};
