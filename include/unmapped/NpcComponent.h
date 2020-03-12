#pragma once

#include "../bedrock/network/packet/NpcRequestPacket.h"
#include <memory>
#include <vector>
#include <string>
#include <functional>


class NpcComponent {

public:
    static long MAX_NPC_NAME_LENGTH;
    static std::string NAME_RAW_TEXT_TAG;
    static std::string INTERACTIVE_TAG;
    static std::string ACTIONS_TAG;
    static std::string URL_TAG;

    void loadActions(Actor &);
    ~NpcComponent();
    void getUpdatedActions(std::string const&, std::vector<std::unique_ptr<NpcAction>> &, bool &, bool &);
    void setSkinIndex(Actor &, int, bool);
    void getSkinCount()const;
    void requestCommandAction(Actor &, int)const;
    void requestClosingCommandActions(Actor &)const;
    void _setActions(Actor &, Player const&, NpcRequestPacket const&);
    void getSkinIndex()const;
    std::string getInteractiveRawText(Actor const&)const;
    void getActionAt(unsigned long);
    std::string getNameRawText(Actor const&)const;
    void getSkinData(int)const;
    void getSelectedSkinData()const;
    void _isServerSide(Actor &)const;
    void addAdditionalSaveData(Actor &, CompoundTag &)const;
    std::string _serializeActions()const;
    void getActionAt(unsigned long)const;
    void _sendNpcRequest(Actor &, NpcRequestPacket)const;
    void removeActionAt(unsigned long);
    void loadNPCData(Actor &);
    void _deserializeData();
    void getButtonCounts()const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getPickerOffset()const;
    NpcComponent();
    void handleNpcRequest(Actor &, Player const&, NpcRequestPacket const&);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAction(std::unique_ptr<NpcAction>);
    void getUrlCount()const;
    void _loadActions(std::vector<std::unique_ptr<NpcAction>> &, std::string const&)const;
    void syncActionsWithClient(Actor &);
    void getActionCount()const;
    void initFromDefinition(Actor &);
    void executeCommandAction(Actor &, int);
    void loadNameRawText(Actor &);
    void _isClientSide(Actor &)const;
    void setInteractiveTextFilter(std::function<std::string (std::string const&)>, bool);
    void _loadData(Actor &);
    NpcComponent(NpcComponent &&);
    std::string getName(Actor const&)const;
    void getPortraitOffset()const;
    void syncActionsWithServer(Actor &)const;
    void setName(Actor &, std::string const&, bool);
//  void _defineEntityDataString(Actor &, ActorDataIDs); //TODO: incomplete function definition
    void setActions(Actor &, std::vector<std::unique_ptr<NpcAction>> &&);
    void executeClosingCommands(Actor &);
    void compileCommand(Actor &, CommandOrigin const&, std::string const&, int);
    void getCommandPermissionLevel()const;
    void removeInteractiveTextFilter();
//  void _defineEntityDataInt(Actor &, ActorDataIDs); //TODO: incomplete function definition
    void setInteractiveText(Actor &, std::string const&, bool);
    bool hasEditPermission(Player &)const;
    void _getCommands(Actor &);
    void loadInteractiveRawText(Actor &);
    void setSkin(Actor &);
    std::string getInteractiveText(Actor &)const;
};
