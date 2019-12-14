#pragma once

class Blacklist::Entry {

public:

    void Entry(mce::UUID const&, std::string const&);
    void Entry(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&);
    void Entry(Blacklist::Entry const&);
    void Entry(Blacklist::Entry&&);
};
