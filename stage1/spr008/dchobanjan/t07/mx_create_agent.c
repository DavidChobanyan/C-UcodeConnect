#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *a;

    if (name == NULL) return NULL;
    a = malloc(sizeof(t_agent));
    a->name = mx_strdup(name);
    a->power = power;
    a->strength = strength;

    return a;
}
