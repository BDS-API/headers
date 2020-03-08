#pragma once

#include "../clacks/protocol/Empty"
#include "../bedrock/metrics/ServerMetricsImpl"
#include "../bedrock/DedicatedServer"
#include "../clacks/protocol/PlayerList"
#include "../bedrock/ServerInstance"
#include "../clacks/protocol/PlayerAndMessage"
#include "../clacks/protocol/Settings"
#include "../clacks/protocol/Message"
#include "../clacks/protocol/MetricReport"
#include "../clacks/protocol/SaveQueryResult"
#include "../clacks/protocol/SaveStateResult"
#include "../clacks/protocol/commands/Service"


class ClacksServer : com::mojang::clacks::protocol::Commands::Service {

public:
    virtual ClacksServer::~ClacksServer()
    virtual void listPlayer(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::PlayerList *);
    virtual void kick(grpc::ServerContext *, com::mojang::clacks::protocol::PlayerAndMessage const*, com::mojang::clacks::protocol::Empty *);
    virtual void say(grpc::ServerContext *, com::mojang::clacks::protocol::Message const*, com::mojang::clacks::protocol::Empty *);
    virtual void changeSettings(grpc::ServerContext *, com::mojang::clacks::protocol::Settings const*, com::mojang::clacks::protocol::Empty *);
    virtual void reloadOps(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void reloadPermissions(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void reloadWhitelist(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveHold(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveQuery(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveQueryResult *);
    virtual void saveResume(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void saveState(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::SaveStateResult *);
    virtual void stop(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void serverStarted(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, com::mojang::clacks::protocol::Empty*);
    virtual void subscribeToMetrics(grpc::ServerContext *, com::mojang::clacks::protocol::Empty const*, grpc::ServerWriter<com::mojang::clacks::protocol::MetricReport> *);

    ClacksServer(DedicatedServer &, NetworkAddress const&, ServerInstance &, PermissionsFile &, WhitelistFile &, ServerMetricsImpl &);
    void run();
    void stop();
    void emptyClacksResponse(std::shared_ptr<ClacksServer::ExecutionAndResult> const&, gsl::basic_string_span<char const, -1l>, com::mojang::clacks::protocol::Empty &);
};
