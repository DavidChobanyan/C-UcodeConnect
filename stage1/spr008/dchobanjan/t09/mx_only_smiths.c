#include "only_smiths.h"

bool is_smith(t_agent *agent, int strength);

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    t_agent **smiths;
    int count = 0;
    int idx = 0;

    if (agents == NULL)return NULL;
    for(int i = 0; agents[i] != NULL; i++)
	    if(is_smith(agents[i], strength)) count++;
    
    smiths = malloc(sizeof(t_agent*) * (count + 1));
    smiths[count] = NULL;
    for (int i = 0; agents[i] != NULL; i++) {
        if (is_smith(agents[i], strength)) {
            smiths[idx] = mx_create_agent(agents[i]->name, agents[i]->power, agents[i]->strength);
            idx++;
        }
    }
    mx_exterminate_agents(&agents);
    return smiths;
}

bool is_smith(t_agent *agent, int strength) {
    return agent->strength < strength
           && mx_strcmp(agent->name, "Smith") == 0;
}
