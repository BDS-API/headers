#pragma once

class FloatOption : Option {

public:
    virtual ~FloatOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

    void FloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, float, float, float);
    void set(float, bool);
    void getValue(void)const;
    void getDefault(void)const;
    void reset(void);
};
