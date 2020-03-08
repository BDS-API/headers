#pragma once



class IntOption : Option {

public:
    virtual IntOption::~IntOption()
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

    IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, std::vector<int, std::allocator<int>> const&, bool);
    void _validate(int);
    IntOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, int, bool, int, int);
    void set(int, bool);
    void getValue()const;
    void getDefault()const;
    void getValues()const;
    void setCoerceSaveValueCallback(std::function<int ()(int)>);
    void reset();
};
