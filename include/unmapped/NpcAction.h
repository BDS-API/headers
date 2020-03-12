#pragma once

#include <string>


class NpcAction {

public:
    static long MAX_BUTTON_NAME_LENGTH;
    static std::string TYPE_KEY;
    static std::string DATA_KEY;
    static std::string MODE_KEY;
    static std::string TEXT_KEY;
    static std::string BUTTON_NAME_KEY;

    ~NpcAction();
    virtual void fromJson(Json::Value const&);
    void read(Json::Value const&);
    void getMode()const;
    std::string getButtonName()const;
    void setText(std::string const&);
//  NpcAction(NpcActionType); //TODO: incomplete function definition
    std::string getRawText()const;
    void toJsonBase(Json::Value &);
    void getType()const;
    std::string getText()const;
    std::string getButtonRawTextName()const;
    void operator!=(NpcAction const&)const;
    void setButtonName(std::string const&);
    void operator==(NpcAction const&)const;
//  void setMode(NpcActionMode); //TODO: incomplete function definition
};
