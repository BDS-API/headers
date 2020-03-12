#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include <string>
#include "../bedrock/command/origin/CommandOrigin.h"
#include <memory>
#include <functional>
#include <vector>
#include "../bedrock/nbt/CompoundTag.h"
#include "NpcAction.h"
#include "DataLoadHelper.h"
#include "../bedrock/network/packet/NpcRequestPacket.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class NpcComponent {

public:
    static long MAX_NPC_NAME_LENGTH;
    static std::string NAME_RAW_TEXT_TAG;
    static std::string INTERACTIVE_TAG;
    static std::string ACTIONS_TAG;
    static std::string URL_TAG;

    void requestClosingCommandActions(Actor &)const;
    void getSkinIndex()const;
    void getActionAt(unsigned long)const;
    void addAdditionalSaveData(Actor &, CompoundTag &)const;
    void executeCommandAction(Actor &, int);
    void _isClientSide(Actor &)const;
    void _deserializeData();
    void getCommandPermissionLevel()const;
    void getSelectedSkinData()const;
    void getSkinCount()const;
    void removeInteractiveTextFilter();
    void requestCommandAction(Actor &, int)const;
    void getSkinData(int)const;
    void _sendNpcRequest(Actor &, NpcRequestPacket)const;
    void handleNpcRequest(Actor &, Player const&, NpcRequestPacket const&);
    void addAction(std::unique_ptr<NpcAction>);
    void removeActionAt(unsigned long);
    void compileCommand(Actor &, CommandOrigin const&, std::string const&, int);
    void setSkinIndex(Actor &, int, bool);
    void _getCommands(Actor &);
    void setInteractiveText(Actor &, std::string const&, bool);
    void getPortraitOffset()const;
    bool hasEditPermission(Player &)const;
    void setInteractiveTextFilter(std::function<std::string (std::string const&)>, bool);
    std::string getName(Actor const&)const;
    void loadNameRawText(Actor &);
    std::string getNameRawText(Actor const&)const;
    void getPickerOffset()const;
//  void _defineEntityDataString(Actor &, ActorDataIDs); //TODO: incomplete function definition
//  void _defineEntityDataInt(Actor &, ActorDataIDs); //TODO: incomplete function definition
    void setName(Actor &, std::string const&, bool);
    NpcComponent();
    void getActionAt(unsigned long);
    void _setActions(Actor &, Player const&, NpcRequestPacket const&);
    void syncActionsWithServer(Actor &)const;
    void _isServerSide(Actor &)const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getButtonCounts()const;
    void getUpdatedActions(std::string const&, std::vector<std::unique_ptr<NpcAction>> &, bool &, bool &);
    ~NpcComponent();
    void syncActionsWithClient(Actor &);
    NpcComponent(NpcComponent &&);
    void initFromDefinition(Actor &);
    std::string getInteractiveText(Actor &)const;
    void setSkin(Actor &);
    void _loadActions(std::vector<std::unique_ptr<NpcAction>> &, std::string const&)const;
    void _loadData(Actor &);
    void setActions(Actor &, std::vector<std::unique_ptr<NpcAction>> &&);
    void loadInteractiveRawText(Actor &);
    std::string _serializeActions()const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void loadNPCData(Actor &);
    void getActionCount()const;
    void getUrlCount()const;
    void loadActions(Actor &);
    std::string getInteractiveRawText(Actor const&)const;
    void executeClosingCommands(Actor &);
};
