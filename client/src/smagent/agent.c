#include "agent.h"
#include <stdlib.h>

int create_agent(Agent **agent)
{
    int ret = 0;

    *agent = malloc(sizeof(Agent));

    return ret;
}

int destroy_agent(Agent **agent)
{
    int ret = 0;

    free(*agent);
    *agent = NULL;

    return ret;
}

int start_agent(Agent *agent)
{
    int ret = 0;

    return ret;
}

int stop_agent(Agent *agent)
{
    int ret = 0;

    return ret;
}
