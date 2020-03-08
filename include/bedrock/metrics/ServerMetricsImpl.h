#pragma once

#include "../../clacks/protocol/MetricReport"
#include "../ServerInstance"
#include "../../unmapped/ServerCommunicationInterface"


class ServerMetricsImpl : ServerMetrics {

public:
    virtual ServerMetricsImpl::~ServerMetricsImpl();
    virtual void sendPeriodicMetrics(ServerInstance &);
    virtual void sendLatencyTimepoints(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&, std::string const&);
    virtual void sendServerTickTime(std::chrono::duration<long, std::ratio<1l, 1000000000l>> const&);

    ServerMetricsImpl(ServerCommunicationInterface *);
    void sendPeriodicMetricsInternal(ServerInstance &);
    void addMetrics(std::unique_ptr<com::mojang::clacks::protocol::MetricReport, std::default_delete<com::mojang::clacks::protocol::MetricReport>>);
    bool isEnabledMetricQueuing(void)const;
    void popMetric(void);
    void setEnableMetricQueuing(bool);
};
