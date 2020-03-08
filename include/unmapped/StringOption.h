#pragma once



class StringOption : Option {

public:
    virtual StringOption::~StringOption()
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

    StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, std::string const&);
    void set(std::string const&, bool);
    void setCoerceValueCallback(std::function<std::string ()(std::string const&)>);
    void reset();
};
