#include <stdio.h>
#include <stdlib.h>

#include "agent.h"

int main(int argc, char *argv[])
{
    printf("smagent starting ... ");

    Agent *agent;

    create_agent(&agent);
    start_agent(agent);

    return 0;
}

