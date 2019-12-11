#pragma once

class GameRule {

public:

    void GameRule(GameRule const&);
    void GameRule(GameRule&&);
    void GameRule(void);
    void GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool, bool, bool);
    void GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, bool, bool, bool);
    void GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, bool, bool, bool);
    void GameRule(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
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
    void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
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
