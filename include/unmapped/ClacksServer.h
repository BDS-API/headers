#pragma once

#include <memory>
#include "../clacks/protocol/commands/Service.h"


class ClacksServer : com::mojang::clacks::protocol::Commands::Service {

public:
    class ExecutionAndResult;

    ~ClacksServer();
//  virtual void reloadPermissions(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveResume(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void serverStarted(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveState(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *); //TODO: incomplete function definition
//  virtual void saveQuery(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *); //TODO: incomplete function definition
//  virtual void say(grpc::ServerContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void stop(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void subscribeToMetrics(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, grpc::ServerWriter<com::mojang::clacks::protocol::MetricReport> *); //TODO: incomplete function definition
//  virtual void changeSettings(grpc::ServerContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void reloadOps(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void kick(grpc::ServerContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void listPlayer(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *); //TODO: incomplete function definition
//  virtual void reloadWhitelist(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
//  virtual void saveHold(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty *); //TODO: incomplete function definition
    ClacksServer(DedicatedServer &, NetworkAddress const&, ServerInstance &, PermissionsFile &, WhitelistFile &, ServerMetricsImpl &);
//  void emptyClacksResponse(std::shared_ptr<ClacksServer::ExecutionAndResult> const&, gsl::basic_string_span<char const, -1l>, com::mojang::clacks::protocol::Empty &); //TODO: incomplete function definition
    void run();
    void stop();
    class ExecutionAndResult {

    public:
        ExecutionAndResult();
        ~ExecutionAndResult();
    };
};
