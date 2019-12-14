#pragma once

class IntOption : Option {

public:
    virtual ~IntOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

    void IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int, std::allocator<int>> const&, bool);
    void _validate(int);
    void IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int);
    void set(int, bool);
    void getValue(void)const;
    void getDefault(void)const;
    void getValues(void)const;
    void setCoerceSaveValueCallback(std::function<int ()(int)>);
    void reset(void);
};
