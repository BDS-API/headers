#pragma once

#include "../SaveQueryResult.h"
#include "../PlayerAndMessage.h"
#include "../Settings.h"
#include <memory>
#include "../PlayerList.h"
#include "../Empty.h"
#include "../Message.h"
#include "../SaveStateResult.h"
#include "./StubInterface.h"


namespace com::mojang::clacks::protocol::Commands {

class Stub : com::mojang::clacks::protocol::Commands::StubInterface {

public:
    virtual ~Stub();
//  virtual void listPlayer(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::PlayerList *); //TODO: incomplete function definition
//  virtual void kick(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void say(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void changeSettings(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void reloadOps(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void reloadPermissions(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void reloadWhitelist(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveHold(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveQuery(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::SaveQueryResult *); //TODO: incomplete function definition
//  virtual void saveResume(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveState(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::SaveStateResult *); //TODO: incomplete function definition
//  virtual void stop(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void serverStarted(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
    virtual void experimental_async();
//  virtual void AsynclistPlayerRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsynclistPlayerRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsynckickRaw(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsynckickRaw(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncsayRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsayRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncchangeSettingsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncchangeSettingsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncreloadOpsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncreloadOpsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncreloadPermissionsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncreloadPermissionsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncreloadWhitelistRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncreloadWhitelistRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncsaveHoldRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsaveHoldRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncsaveQueryRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsaveQueryRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncsaveResumeRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsaveResumeRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncsaveStateRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsaveStateRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncstopRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncstopRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void AsyncserverStartedRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void PrepareAsyncserverStartedRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition
//  virtual void subscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&); //TODO: incomplete function definition
//  virtual void AsyncsubscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *, void *); //TODO: incomplete function definition
//  virtual void PrepareAsyncsubscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *); //TODO: incomplete function definition

//  Stub(std::shared_ptr<grpc::ChannelInterface> const&); //TODO: incomplete function definition
};

}