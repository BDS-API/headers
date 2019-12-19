#pragma once

class GameRule {

public:

    GameRule(GameRule const&);
    GameRule(GameRule&&);
    GameRule(void);
    GameRule(std::string const&, bool, bool, bool, bool);
    GameRule(std::string const&, int, bool, bool, bool);
    GameRule(std::string const&, float, bool, bool, bool);
    GameRule(std::string const&);
    void getType(void)const;
    void resetType(GameRule::Type);
    void _set(GameRule::Value const&, bool *, GameRule::ValidationError *);
    void compareValue(GameRule::Value const&)const;
    void getBool(void)const;
    void setBool(bool, bool *, GameRule::ValidationError *);
    void getInt(void)const;
    void setInt(int, bool *, GameRule::ValidationError *);
    void getFloat(void)const;
    void setFloat(float, bool *, GameRule::ValidationError *);
    void getValue(void)const;
    void shouldSave(void)const;
    void allowUseInCommand(void)const;
    bool hasDefaultSet(void)const;
    void requiresCheats(void)const;
    void setName(std::string const&);
    void _setDefaultValue(bool);
    void _setDefaultValue(int);
    void _setDefaultValue(float);
    void setShouldSave(bool);
    void setAllowInCommand(bool);
    void setRequiresCheats(bool);
    void setTagDataNotFoundCallback(std::function<void ()(GameRule&)>);
    void setValidateValueCallback(std::function<bool ()(GameRule::Value const&, GameRule::ValidationError *)>);
    void tagDataNotFound(void);
};
