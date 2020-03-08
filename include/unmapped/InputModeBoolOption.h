#pragma once



class InputModeBoolOption : Option {

public:
    virtual InputModeBoolOption::~InputModeBoolOption()
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);

    InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool);
    InputModeBoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool, bool, bool, bool);
    void getValue(InputMode)const;
    void set(InputMode, bool, bool);
    void getDefault(InputMode)const;
    void _saveForInputMode(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &, InputMode);
    void reset(InputMode);
};
