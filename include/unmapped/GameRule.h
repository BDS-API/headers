#pragma once

#include "./ValidationError.h"
#include "./Value.h"
#include "./GameRule.h"
#include <functional>
#include <string>


class GameRule {

public:

    ~GameRule();
    GameRule(GameRule const&);
    GameRule(GameRule &&);
    GameRule();
    GameRule(std::string const&, bool, bool, bool, bool);
    GameRule(std::string const&, int, bool, bool, bool);
    GameRule(std::string const&, float, bool, bool, bool);
    GameRule(std::string const&);
    void getType()const;
//  void resetType(GameRule::Type); //TODO: incomplete function definition
    void _set(GameRule::Value const&, bool *, GameRule::ValidationError *);
    void compareValue(GameRule::Value const&)const;
    void getBool()const;
    void setBool(bool, bool *, GameRule::ValidationError *);
    void getInt()const;
    void setInt(int, bool *, GameRule::ValidationError *);
    void getFloat()const;
    void setFloat(float, bool *, GameRule::ValidationError *);
    void getValue()const;
    void shouldSave()const;
    std::string getName()const;
    void allowUseInCommand()const;
    bool hasDefaultSet()const;
    bool requiresCheats()const;
    void setName(std::string const&);
    void _setDefaultValue(bool);
    void _setDefaultValue(int);
    void _setDefaultValue(float);
    void setShouldSave(bool);
    void setAllowInCommand(bool);
    void setRequiresCheats(bool);
//  void setTagDataNotFoundCallback(std::function<void (GameRule &)>); //TODO: incomplete function definition
    void setValidateValueCallback(std::function<bool (GameRule::Value const&, GameRule::ValidationError *)>);
    void tagDataNotFound();
};
