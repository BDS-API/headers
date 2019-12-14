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
    void setButtonName(std::string const&);
    void setText(std::string const&);
    void toJsonBase(Json::Value &);
    void read(Json::Value const&);
};
