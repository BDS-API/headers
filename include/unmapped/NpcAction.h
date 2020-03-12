#pragma once

#include <string>
#include "../json/Value.h"


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
    void operator==(NpcAction const&)const;
//  NpcAction(NpcActionType); //TODO: incomplete function definition
//  void setMode(NpcActionMode); //TODO: incomplete function definition
    void getType()const;
    void operator!=(NpcAction const&)const;
    void setText(std::string const&);
    std::string getText()const;
    std::string getRawText()const;
    std::string getButtonName()const;
    void toJsonBase(Json::Value &);
    void getMode()const;
    void setButtonName(std::string const&);
    void read(Json::Value const&);
    std::string getButtonRawTextName()const;
};
