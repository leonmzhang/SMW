#ifndef __AGENT_H_1508925117__
#define __AGENT_H_1508925117__

typedef struct Agent_t
{
    int id_;

} Agent;

int create_agent(Agent **agent);

int destroy_agent(Agent **agent);

int start_agent(Agent *agent);

int stop_agent(Agent *agent);

#endif /* __AGENT_H_1508925117__ */
