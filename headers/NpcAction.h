#pragma once

class NpcAction {

public:
    static long NpcAction::MAX_BUTTON_NAME_LENGTH;

    virtual ~NpcAction();
    virtual void fromJson(Json::Value const&);

    void NpcAction(NpcActionType);
    void getType(void)const;
    void getMode(void)const;
    void setMode(NpcActionMode);
    void setButtonName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void toJsonBase(Json::Value &);
    void read(Json::Value const&);
};
