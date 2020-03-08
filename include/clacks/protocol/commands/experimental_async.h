#pragma once

#include "../Empty"
#include "../PlayerAndMessage"
#include "../MetricReport"
#include "../SaveQueryResult"
#include "../SaveStateResult"
#include "../Settings"
#include "../Message"
#include "../PlayerList"


using namespace com::mojang::clacks::protocol::Commands::Stub;

class experimental_async : com::mojang::clacks::protocol::Commands::StubInterface::experimental_async_interface {

public:
    virtual com::mojang::clacks::protocol::Commands::Stub::experimental_async::~experimental_async()
    virtual void listPlayer(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *, std::function<void ()(grpc::Status)>);
    virtual void kick(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *, std::function<void ()(grpc::Status)>);
    virtual void say(grpc::ClientContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *, std::function<void ()(grpc::Status)>);
    virtual void changeSettings(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *, std::function<void ()(grpc::Status)>);
    virtual void reloadOps(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void reloadPermissions(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void reloadWhitelist(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void saveHold(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void saveQuery(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *, std::function<void ()(grpc::Status)>);
    virtual void saveResume(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void saveState(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *, std::function<void ()(grpc::Status)>);
    virtual void stop(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void serverStarted(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*, std::function<void ()(grpc::Status)>);
    virtual void subscribeToMetrics(grpc::ClientContext *, com::mojang::clacks::protocol::Empty *, grpc::experimental::ClientReadReactor<com::mojang::clacks::protocol::MetricReport> *);

    experimental_async(com::mojang::clacks::protocol::Commands::Stub*);
};
