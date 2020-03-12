#pragma once

#include <string>
#include <functional>


class GameRule {

public:
    class ValidationError;
    class Value;

    void setInt(int, bool *, GameRule::ValidationError *);
//  void resetType(GameRule::Type); //TODO: incomplete function definition
    void shouldSave()const;
    void _set(GameRule::Value const&, bool *, GameRule::ValidationError *);
    void setTagDataNotFoundCallback(std::function<void (GameRule &)>);
    void setFloat(float, bool *, GameRule::ValidationError *);
    GameRule(std::string const&);
    void setBool(bool, bool *, GameRule::ValidationError *);
    void getBool()const;
    bool requiresCheats()const;
    bool hasDefaultSet()const;
    void _setDefaultValue(int);
    void tagDataNotFound();
    void setValidateValueCallback(std::function<bool (GameRule::Value const&, GameRule::ValidationError *)>);
    void getValue()const;
    void setShouldSave(bool);
    void _setDefaultValue(float);
    void allowUseInCommand()const;
    std::string getName()const;
    ~GameRule();
    void getInt()const;
    void _setDefaultValue(bool);
    void getFloat()const;
    GameRule(GameRule const&);
    void getType()const;
    GameRule();
    void setRequiresCheats(bool);
    void compareValue(GameRule::Value const&)const;
    GameRule(std::string const&, float, bool, bool, bool);
    void setAllowInCommand(bool);
    void setName(std::string const&);
    GameRule(GameRule &&);
    GameRule(std::string const&, bool, bool, bool, bool);
    GameRule(std::string const&, int, bool, bool, bool);
    class ValidationError {

    public:
        ~ValidationError();
        std::string errorDescriptionParameters()const;
        ValidationError();
        void setDescription(std::string const&);
        std::string errorDescription()const;
        bool isSuccess()const;
        void setSuccess(bool);
    };
    class Value {

    public:
        Value();
        Value(float);
        Value(bool);
        Value(int);
    };
};
