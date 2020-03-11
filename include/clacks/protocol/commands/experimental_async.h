#pragma once

#include "../SaveQueryResult.h"
#include "../MetricReport.h"
#include "../Settings.h"
#include "./Stub.h"
#include "../PlayerList.h"
#include "./experimental_async_interface.h"
#include "../Empty.h"
#include "../Message.h"
#include "../SaveStateResult.h"
#include <functional>
#include "../PlayerAndMessage.h"


namespace com::mojang::clacks::protocol::Commands::Stub {

class experimental_async : com::mojang::clacks::protocol::Commands::StubInterface::experimental_async_interface {

public:
    virtual ~experimental_async();
//  virtual void listPlayer(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void kick(grpc::ClientContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void say(grpc::ClientContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void changeSettings(grpc::ClientContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void reloadOps(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void reloadPermissions(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void reloadWhitelist(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void saveHold(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void saveQuery(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void saveResume(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void saveState(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void stop(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void serverStarted(grpc::ClientContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *, std::function<void (grpc::Status)>); //TODO: incomplete function definition
//  virtual void subscribeToMetrics(grpc::ClientContext *, com::mojang::clacks::protocol::Empty *, grpc::experimental::ClientReadReactor<com::mojang::clacks::protocol::MetricReport> *); //TODO: incomplete function definition

    experimental_async(com::mojang::clacks::protocol::Commands::Stub *);
};

}