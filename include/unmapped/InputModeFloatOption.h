#pragma once



class InputModeFloatOption : Option {

public:
    virtual InputModeFloatOption::~InputModeFloatOption()
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);
    virtual void load(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);

    InputModeFloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float);
    void getValue(InputMode)const;
    void set(InputMode, float, bool);
    void getDefault(InputMode)const;
    void _saveForInputMode(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &, InputMode);
    void reset(InputMode);
};
