#pragma once

#include "../Empty"
#include "../PlayerAndMessage"
#include "../SaveQueryResult"
#include "../SaveStateResult"
#include "../Settings"
#include "../Message"
#include "../PlayerList"


using namespace com::mojang::clacks::protocol::Commands;

class Stub : com::mojang::clacks::protocol::Commands::StubInterface {

public:
    virtual com::mojang::clacks::protocol::Commands::Stub::~Stub()
    virtual void listPlayer(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::PlayerList *);
    virtual void kick(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, com::mojang::clacks::protocol::Empty *);
    virtual void say(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, com::mojang::clacks::protocol::Empty *);
    virtual void changeSettings(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, com::mojang::clacks::protocol::Empty *);
    virtual void reloadOps(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void reloadPermissions(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void reloadWhitelist(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void saveHold(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void saveQuery(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::SaveQueryResult *);
    virtual void saveResume(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void saveState(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::SaveStateResult *);
    virtual void stop(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void serverStarted(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, com::mojang::clacks::protocol::Empty*);
    virtual void experimental_async();
    virtual void AsynclistPlayerRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsynclistPlayerRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsynckickRaw(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, grpc::CompletionQueue *);
    virtual void PrepareAsynckickRaw(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const&, grpc::CompletionQueue *);
    virtual void AsyncsayRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncsayRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Message const&, grpc::CompletionQueue *);
    virtual void AsyncchangeSettingsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncchangeSettingsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const&, grpc::CompletionQueue *);
    virtual void AsyncreloadOpsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncreloadOpsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncreloadPermissionsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncreloadPermissionsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncreloadWhitelistRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncreloadWhitelistRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncsaveHoldRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncsaveHoldRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncsaveQueryRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncsaveQueryRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncsaveResumeRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncsaveResumeRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncsaveStateRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncsaveStateRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncstopRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncstopRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void AsyncserverStartedRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void PrepareAsyncserverStartedRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);
    virtual void subscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&);
    virtual void AsyncsubscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *, void *);
    virtual void PrepareAsyncsubscribeToMetricsRaw(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const&, grpc::CompletionQueue *);

    Stub(std::shared_ptr<grpc::ChannelInterface> const&);
};
